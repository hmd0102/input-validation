#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define BASE_DIR "/var/www/files"

void url_decode(const char *src, char *dest) {
    while (*src) {
        if (*src == '%' &&
            isxdigit(*(src + 1)) &&
            isxdigit(*(src + 2))) {

            char hex[3];
            hex[0] = *(src + 1);
            hex[1] = *(src + 2);
            hex[2] = '\0';

            *dest = (char) strtol(hex, NULL, 16);
            src += 3;
        } else if (*src == '+') {
            *dest = ' ';
            src++;
        } else {
            *dest = *src;
            src++;
        }
        dest++;
    }
    *dest = '\0';
}

int is_valid(const char *input) {
    if (strstr(input, "../") != NULL) {
        return 0;
    }

    for (int i = 0; input[i]; i++) {
        if (!(isalnum(input[i]) || input[i] == '.' || input[i] == '_' || input[i] == '-')) {
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
    scanf("%255s", input);

    url_decode(input, decoded);

    if (!is_valid(decoded)) {
        printf("Invalid input!\n");
        return 1;
    }

    snprintf(path, sizeof(path), "%s/%s", BASE_DIR, decoded);

    printf("Opening: %s\n", path);

    return 0;
}
