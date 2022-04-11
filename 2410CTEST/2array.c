#include <stdio.h>

int main() {
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };


	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i][0]);
		printf("%d\n", arr[i][1]);
		printf("%d\n", arr[i][2]);
		printf("%d\n", arr[i][3]);
	}
	
}