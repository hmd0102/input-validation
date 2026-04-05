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

    if (withdraw > balance) {
        printf("Khong du tien!\n");
    } else {
        balance -= withdraw;
        printf("Rut tien thanh cong!\n");
        printf("So du con lai: %.2f\n", balance);
    }

    return 0;
}
