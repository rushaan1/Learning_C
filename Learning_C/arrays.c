#include <stdio.h>

void arrayReverse_and_print(int _array[], int n) {

	for (int i = 0; i < n/2; i++) {

		int last = _array[n - i - 1];
		int first = _array[i];

		_array[i] = last;
		_array[n - i - 1] = first;
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", _array[i]);
	}
}

void storeTables(int arr[][10], int n, int number) {
	for (int i = 1; i <= 10; i++) {
		arr[n][i] = number * i;
	}

}

int main() {
	int _n_array[] = {1,2,3,4,5,6,7,8};
	//arrayReverse_and_print(_n_array, 8);

	int _2dArray[2][10];
	storeTables(_2dArray, 0, 2);
	storeTables(_2dArray, 1, 3);


	for (int i = 1; i <= 10; i++) {
		printf("%d\n",_2dArray[0][i]);
	}
	printf("\n\n");
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", _2dArray[1][i]);
	}
	return 0;
}
