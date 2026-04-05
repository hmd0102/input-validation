#include <stdio.h>
#include <string.h>

int main() {
    int age;
    float salary, withdraw;
    char name[50];

    printf("Nhap ten: ");
    fgets(name, sizeof(name), stdin);

    // Xóa ký tự newline
    name[strcspn(name, "\n")] = 0;

    if (strlen(name) == 0) {
        printf("Ten khong duoc rong!\n");
        return 1;
    }

    printf("Nhap tuoi: ");
    if (scanf("%d", &age) != 1) {
        printf("Tuoi khong hop le!\n");
        return 1;
    }

    printf("Nhap luong: ");
    if (scanf("%f", &salary) != 1) {
        printf("Luong khong hop le!\n");
        return 1;
    }

    printf("Nhap so tien muon rut: ");
    if (scanf("%f", &withdraw) != 1) {
        printf("So tien khong hop le!\n");
        return 1;
    }

    // ===== SEMANTIC VALIDATION =====

    if (age < 0 || age > 120) {
        printf("Tuoi khong hop ly!\n");
        return 1;
    }

    if (salary <= 0) {
        printf("Luong phai lon hon 0!\n");
        return 1;
    }

    if (withdraw <= 0) {
        printf("So tien rut phai lon hon 0!\n");
        return 1;
    }

    if (withdraw > salary) {
        printf("Khong du tien de rut!\n");
        return 1;
    }

    printf("Du lieu hop le!\n");
    return 0;
}