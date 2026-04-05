#include <stdio.h>

int main() {
    int age;

    printf("Nhap tuoi: ");
    if (scanf("%d", &age) != 1) {
        printf("Loi: Du lieu khong phai so nguyen.\n");
        return 1;
    }

    printf("Tuoi cua ban la: %d\n", age);

    return 0;
}
