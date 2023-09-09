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

int how_many(int _arr[], int s, int n) {
	int counter = 0;
	for (int i = 0; i <= s - 1; i++) {
		if (_arr[i] == n) {
			//printf("Counter++ happening\n");
			counter++;
		}
	}
	return counter;
}

int largest_num(int arr[], int n) {
	int _larges_num = 0;
	for (int i = 1; i <= n-1; i++) {
		if (arr[i - 1] > arr[i]) {
			_larges_num = arr[i - 1];
		}
		else if (arr[i - 1] < arr[i]) {
			_larges_num = arr[i];
		}
	}
	return _larges_num;
}

int main() {
	int _n_array[] = {1,2,3,4,5,6,7,8};
	//arrayReverse_and_print(_n_array, 8);

	int _2dArray[2][10];
	storeTables(_2dArray, 0, 2);
	storeTables(_2dArray, 1, 3);
	int arr[] = { 96,-85,26,418,2,1,554,12,2,2,2 };

	//printf("%d", largest_num(arr, 8));
	printf("%d\n", how_many(arr, 11, 2));

	for (int i = 1; i <= 10; i++) {
		//printf("%d\n",_2dArray[0][i]);
	}
	//printf("\n\n");
	for (int i = 1; i <= 10; i++) {
		//printf("%d\n", _2dArray[1][i]);
	}
	return 0;
}
