#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    *ptr = 10;
    printf("Gia tri: %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    return 0;
}
