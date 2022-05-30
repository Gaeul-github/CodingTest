#include <stdio.h>
#include <string.h>

int main(void) {
	char a[20] = "Hello";
	char b[20] = "Yellow";

	int a_len = strlen(a);
	int b_len = strlen(b);

	int length = a_len;
	if (a_len < b_len) {
		length = b_len;
	}

}