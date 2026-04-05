#include <stdio.h>
#include <string.h>

int main() {
    char src[100];
    char dest[10];

    printf("Nhap chuoi: ");
    fgets(src, sizeof(src), stdin);

    // Xoa newline
    src[strcspn(src, "\n")] = '\0';

    if (strlen(src) >= sizeof(dest)) {
        printf("Chuoi qua dai!\n");
        return 1;
    }

    strncpy(dest, src, sizeof(dest) - 1);
    dest[sizeof(dest) - 1] = '\0';

    printf("Chuoi: %s\n", dest);

    return 0;
}
