#include <stdio.h>
int main() {
	char str[30] = "Hello";
	int length = 0;

	for (int i = 0; str[i] != '\0'; i++) {
			length++;
	}

	printf("±æÀÌ´Â %d", length);

	return 0;
}

