#include <stdio.h>
#include <string.h>

int main(void) {
	int jungsu = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;

	char mjyeol[12] = "Hello World";
	//���ڴ� ���� ���� 11��
	//�迭�� ���̴� 11+1

	printf("����: %d, ����: %c, ����: %lf, �÷�: %f\n", jungsu, munja, sosu, sosu1);
	printf("���ڿ�: %s", mjyeol);

	for (int i = 0; i <= strlen(mjyeol); i++) {
		printf("%c", mjyeol[i]);
	}

	
	return 0;
}