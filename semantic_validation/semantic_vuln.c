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

    printf("\n===== THONG TIN =====\n");
    printf("Ten: %s", name);
    printf("Tuoi: %d\n", age);
    printf("Luong: %.2f\n", salary);
    printf("Rut: %.2f\n", withdraw);

    float remaining = salary - withdraw;
    printf("So du con lai: %.2f\n", remaining);

    return 0;
}
