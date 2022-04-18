#include <stdio.h>
void getMax(int *arr, int length) {

	int temp = -1;
	int idx = 99;
	int arr[10] = { 8,  9, 20, 30, 3, 4, 5, 6, 23, 54 };

	for (int i = 0; i < length; i++) {
		if (arr[i] > temp) {
			temp = arr[i];
			idx = i;
		}
	}
	printf("%d ", temp);
	printf("%d ", idx);
}

int main(void) {
	int arr1[10] = { 8,  9, 20, 30, 3, 4, 5, 6, 23, 54 };
	getMax(arr1, 10);
}