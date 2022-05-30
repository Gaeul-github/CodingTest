#include <stdio.h>
#include <string.h>

void my_strcat(char* s1, char* s2) {
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	for (int i = 0; i < s2_len; i++) {
		s1[s1_len + i] = s2;
	}
}

int main(void) {
	char str1[20] = "hello";
	char str2[20] = "yellow";

	my_strcat(str1, str2);
	printf("%s", str1);
}