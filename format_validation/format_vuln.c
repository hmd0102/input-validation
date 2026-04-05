#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    int age;

    printf("=== User Registration ===\n");

    printf("Enter your name: ");
    scanf("%s", input);

    printf("Hello: ");
    printf(input);   

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 13) {
        printf("Registration successful!\n");
    } else {
        printf("Registration denied!\n");
    }

    return 0;
}
