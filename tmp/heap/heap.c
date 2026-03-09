#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *a = malloc(16);
	char *b = malloc(16);
	
	memset(b, 'B', 15);
	b[15] = '\0';
	strcpy(a, "AAAAAAAAAAAAAAAAAAAAAAAA");

	printf("b content: %s\n", b);

	free(a);
	free(b);
}
