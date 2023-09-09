#include <stdio.h>

void arrayReverse() {
	int _array[] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 5; i++) {

		int last = _array[10 - i - 1];
		int first = _array[i];

		_array[i] = last;
		_array[10 - i - 1] = first;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", _array[i]);
	}
}

int main() {
	return 0;
}

