#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    int age;

    printf("Enter your age: ");
    scanf("%s", input);

    age = atoi(input);   // convert string -> int

    if(age > 18)
        printf("Access granted\n");
    else
        printf("Access denied\n");

    return 0;
}
