#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define BASE_DIR "/var/www/files"

// Decode URL (1 lần)
int url_decode(const char *src, char *dest, size_t max_len) {
    size_t i = 0;

    while (*src && i < max_len - 1) {
        if (*src == '%' &&
            isxdigit(*(src + 1)) &&
            isxdigit(*(src + 2))) {

            char hex[3];
            hex[0] = *(src + 1);
            hex[1] = *(src + 2);
            hex[2] = '\0';

            dest[i++] = (char) strtol(hex, NULL, 16);
            src += 3;
        } else if (*src == '+') {
            dest[i++] = ' ';
            src++;
        } else {
            dest[i++] = *src++;
        }
    }

    dest[i] = '\0';
    return 1;
}

// Reject suspicious encodings (double encoding)
int contains_encoded_sequences(const char *input) {
    return strstr(input, "%25") != NULL; // %25 = '%'
}

// Strict whitelist validation
int is_valid(const char *input) {
    if (strlen(input) == 0) return 0;

    // ❌ reject traversal patterns
    if (strstr(input, "../") || strstr(input, "..\\")) {
        return 0;
    }

    // ❌ reject absolute path
    if (input[0] == '/' || input[0] == '\\') {
        return 0;
    }

    // ✅ whitelist characters only
    for (int i = 0; input[i]; i++) {
        if (!(isalnum(input[i]) ||
              input[i] == '.' ||
              input[i] == '_' ||
              input[i] == '-')) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char input[256];
    char decoded[256];
    char path[300];

    printf("Enter filename: ");

    if (scanf("%255s", input) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    // ❌ reject suspicious encoding BEFORE decode
    if (contains_encoded_sequences(input)) {
        printf("Invalid encoding detected!\n");
        return 1;
    }

    // ✅ decode
    url_decode(input, decoded, sizeof(decoded));

    // ❌ reject if still contains encoded pattern (defense-in-depth)
    if (strstr(decoded, "%") != NULL) {
        printf("Invalid encoding!\n");
        return 1;
    }

    // ✅ validate canonical form
    if (!is_valid(decoded)) {
        printf("Invalid filename!\n");
        return 1;
    }

    // ✅ safe path construction
    snprintf(path, sizeof(path), "%s/%s", BASE_DIR, decoded);

    printf("Opening: %s\n", path);

    return 0;
}
