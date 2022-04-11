#include <stdio.h>

int main() {

	int temp = -1;
	int idx = 99;
	int arr[10] = { 8,  9, 20, 30, 3, 4, 5, 6, 23, 54 };

	for (int i = 0; i < 10; i++) {
		if (arr[i] > temp) {
			temp = arr[i];
			idx = i;
		}
	}
	printf("%d ", temp);
	printf("%d ", idx);
	
	return 0;
}