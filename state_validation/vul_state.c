#include <stdio.h>

int main() {
    float balance, withdraw;
    int status;

    printf("Nhap so du: ");
    scanf("%f", &balance);

    printf("Nhap so tien muon rut: ");
    scanf("%f", &withdraw);

    printf("Trang thai (0: Khoa, 1: Hoat dong, 2: Chua dang nhap): ");
    scanf("%d", &status);

    // XỬ LÝ TRƯỚC KHI CHECK STATE
    if (withdraw > balance) {
        printf("Khong du tien!\n");
        return 1;
    }

    balance -= withdraw;

    // Check state sau 
    if (status == 2) {
        printf("Ban phai dang nhap truoc!\n");
    }

    if (status == 0) {
        printf("Tai khoan bi khoa!\n");
    }

    printf("Rut tien thanh cong! So du: %.2f\n", balance);

    return 0;
}