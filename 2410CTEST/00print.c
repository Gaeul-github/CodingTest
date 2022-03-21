#include <stdio.h>

int main(void) {
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;

	char mjyeol[12] = "Hello World";
	//문자는 띄어쓰기 포함 11개
	//배열의 길이는 11+1

	printf("정수: %d, 문자: %c, 더블: %lf, 플롯: %f\n", jungsu, munja, sosu, sosu1);
	printf("문자열: %s", mjyeol);

/*	for (int i = 0; i <= 11; i++) {
		printf("%c", mjyeol[i]);
	}
	*/

	printf("%c", mjyeol[1]);
	printf("%c", mjyeol[2]);
	printf("%c", mjyeol[3]);
	printf("%c", mjyeol[4]);
	printf("%c", mjyeol[5]);
	printf("%c", mjyeol[6]);
	printf("%c", mjyeol[7]);
	printf("%c", mjyeol[8]);
	printf("%c", mjyeol[9]);
	printf("%c", mjyeol[10]);
	printf("%c", mjyeol[11]);
	
	return 0;
}