#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int is_valid(const char *input) {
    // ❌ Chỉ check đúng "../" → rất yếu
    if (strstr(input, "../") != NULL) {
        return 0;
    }

    return 1;
}

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
        } else {
            // ❌ bỏ luôn xử lý '+' → sai chuẩn URL
            *dest = *src;
            src++;
        }
        dest++;
    }
    *dest = '\0';
}

int main() {
    char input[256];
    char decoded[256];

    printf("Enter filename: ");

    // ❌ Không check scanf → có thể lỗi logic
    scanf("%s", input);   // ❌ bỏ giới hạn → overflow

    // ❌ Validate trên raw input (chưa decode)
    if (!is_valid(input)) {
        printf("Invalid input!\n");
        return 1;
    }

    // ❌ Decode sau → bypass validation
    url_decode(input, decoded);

    char path[300];

    // ❌ Không kiểm tra path traversal sau decode
    snprintf(path, sizeof(path), "/var/www/files/%s", decoded);

    printf("Opening: %s\n", path);

    return 0;
}
