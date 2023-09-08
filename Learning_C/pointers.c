#include <stdio.h>

void _multiply_by_2(int n); // CALL BY VALUE
void _multiply_by_2_ptr(int* n); // CALL BY REFERENCE
void swap(int* a, int* b);
void maximum(int a, int b, int* maximum);

int main() {
	int age = 22;
	int *ptr = &age;
	int **pptr = &ptr;
	// printf("%d", **pptr); IT WILL PRINT 22





	int number = 8;
	_multiply_by_2(number);
	//printf("%d\n",number);// IT WILL STAY THE SAME
	_multiply_by_2_ptr(&number);
	//printf("%d\n", number); // IT WILL CHANGE BECAUSE THE FUNCTION WILL CHANGE IT




	int _x = 3, _y = 9;
	//printf("Old values: _x: %d, _y = %d\n", _x, _y);
	swap(&_x, &_y);
	//printf("New values: _x: %d, _y = %d\n", _x, _y);




	int m = 5, n = 7, max;
	maximum(m,n,&max);
	//printf("Value of max: %d",max);





	for (int i = 0; i <= 25; i++) {
		char c = 'A';
		char *ptr = &c;
		*ptr = *ptr + i;
		printf("%c\n",*ptr);
	}
}

void _multiply_by_2(int n) {
	n = n * 2;
}

void _multiply_by_2_ptr(int* n) {
	*n = *n * 2;
}

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void maximum(int a, int b, int* maximum) {
	if (a > b) {
		*maximum = a;
	}
	else if (a < b) {
		*maximum = b;
	}
}
