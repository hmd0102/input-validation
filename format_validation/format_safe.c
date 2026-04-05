#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int is_number(char *str) {
    if (strlen(str) == 0) return 0;

    for(int i = 0; i < strlen(str); i++) {
        if(!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char input[100];
    int age;

    printf("=== User Registration ===\n");
    printf("Enter your age: ");
    scanf("%99s", input);

    // Format validation
    if(!is_number(input)) {
        printf("Error: Age must contain only digits!\n");
        return 1;
    }

    age = atoi(input);

    if(age < 13) {
        printf("Registration denied: You must be at least 13 years old.\n");
    } else {
        printf("Registration successful!\n");
    }

    return 0;
}
