#include <stdio.h>
#include <string.h>

int main() {
    int age;
    float salary, withdraw;
    char name[50];

    printf("Nhap ten: ");
    fgets(name, sizeof(name), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &age);

    printf("Nhap luong: ");
    scanf("%f", &salary);

    printf("Nhap so tien muon rut: ");
    scanf("%f", &withdraw);

    // Semantic validation

    if (age < 0 || age > 120) {
        printf("Tuoi khong hop ly!\n");
        return 1;
    }

    if (salary <= 0) {
        printf("Luong phai lon hon 0!\n");
        return 1;
    }

    if (withdraw > salary) {
        printf("Khong du tien de rut!\n");
        return 1;
    }

    printf("Du lieu hop le!\n");
    return 0;
}
