#include <stdio.h>

int main() {
        int arr[10] = {0};
        int index;

        printf("Index: ");
        scanf("%d", &index);

        if (index >= 0 && index < 10){
                arr[index] = 123;
                printf("Index %d of array have value %d\n", index, arr[index]);
        } else {
                printf("Invalid index\n");
        }

        return 0;
}