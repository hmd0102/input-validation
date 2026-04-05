#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    int age;

    printf("=== User Registration ===\n");
    printf("Enter your age: ");

    // ❌ Không giới hạn độ dài → có thể overflow
    scanf("%s", input);

    // ❌ Không kiểm tra format (có thể nhập chữ)
    age = atoi(input);

    if(age >= 13) {
        printf("Registration successful!\n");
    } else {
        printf("Registration denied!\n");
    }

    return 0;
}
