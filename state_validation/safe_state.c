#include <stdio.h>

int main() {
    float balance, withdraw;
    int status;

    printf("Nhap so du: ");
    if (scanf("%f", &balance) != 1) return 1;

    printf("Nhap so tien muon rut: ");
    if (scanf("%f", &withdraw) != 1) return 1;

    printf("Trang thai (0: Khoa, 1: Hoat dong, 2: Chua dang nhap): ");
    if (scanf("%d", &status) != 1) return 1;

    // STATE VALIDATION TRƯỚC
    if (status == 2) {
        printf("Ban phai dang nhap truoc!\n");
        return 1;
    }

    if (status == 0) {
        printf("Tai khoan da bi khoa!\n");
        return 1;
    }

    // SEMANTIC VALIDATION SAU
    if (withdraw <= 0) {
        printf("So tien khong hop le!\n");
        return 1;
    }

    if (withdraw > balance) {
        printf("Khong du tien!\n");
        return 1;
    }

    balance -= withdraw;

    printf("Rut tien thanh cong!\n");
    printf("So du con lai: %.2f\n", balance);

    return 0;
}