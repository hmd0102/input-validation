#include <stdio.h>
#include <string.h>

int main() {
    int age;
    float salary, withdraw;
    char name[50];

    printf("Nhap ten: ");
    gets(name); 

    printf("Nhap tuoi: ");
    scanf("%d", &age); 

    printf("Nhap luong: ");
    scanf("%f", &salary);

    printf("Nhap so tien muon rut: ");
    scanf("%f", &withdraw);


    if (withdraw > salary) {
        printf("Khong du tien!\n");
    }

    printf("Rut tien thanh cong!\n");

    return 0;
}