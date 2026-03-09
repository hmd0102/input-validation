#include <stdio.h>
#include <regex.h>

int main() {
	regex_t regex;
	regcomp(&regex, "[a-z]+$", REG_EXTENDED);
	char test[20];
	scanf("%s", test);
	if (regexec(&regex, test, 0, NULL, 0) == 0)
		printf("Match\n");
	else
		printf("No match\n");

	return 0;
}
