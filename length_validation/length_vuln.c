#include <stdio.h>
#include <string.h>

int main() {
    char src[100];
    char dest[10];

    printf("Nhap chuoi: ");
    gets(src);  // Nguy hiem

    strcpy(dest, src);  // Co the overflow

    printf("Chuoi: %s\n", dest);

    return 0;
}
