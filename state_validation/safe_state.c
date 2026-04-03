#include <stdio.h>

int main() {
    float balance, withdraw;
    int status;

    printf("Nhap so du: ");
    scanf("%f", &balance);

    printf("Nhap so tien muon rut: ");
    scanf("%f", &withdraw);

    printf("Trang thai tai khoan (0: Khoa, 1: Hoat dong, 2: Chua dang nhap): ");
    scanf("%d", &status);

    if (status == 2) {
        printf("Ban phai dang nhap truoc!\n");
        return 1;
    }

    if (status == 0) {
        printf("Tai khoan da bi khoa!\n");
        return 1;
    }

    printf("Trang thai hop le, tien hanh xu ly...\n");

    return 0;
}