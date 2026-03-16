#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int is_number(char *str) {
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

    printf("Enter your age: ");
    scanf("%s", input);

    if(!is_number(input)) {
        printf("Invalid format!\n");
        return 1;
    }

    age = atoi(input);

    if(age > 18)
        printf("Access granted\n");
    else
        printf("Access denied\n");

    return 0;
}
