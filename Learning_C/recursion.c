#include <stdio.h>




/*
* ONLY FOR LEARNING PURPOSES,
* COMMENT OUT EVERY SECTION OF CODE EXCEPT FOR THE ONE U WANT TO RUN/USE
*/

//***************easy recursion finding sum of n natural numbers
void sum(int n);

int container = 0;

int main() {
	sum(6);
	printf("%d", container);
	return 0;
}

void sum(int n) {
	if (n == 0) {
		return;
	}
	container = container + n;
	sum(--n);
}


//*****************sum of n natural numbers
int sum(int n);

int main() {
	printf("Sum is: %d", sum(20));
	return 0;
}

int sum(int n) {
	if (n == 1) {
		return 1; // THIS VALUE IS NOT RETURNED TO sum(6) OF MAIN FUNCTION ABOVEEEEE BUT IT IS INSTEAD RETURNED TO THE FUNCTION CALLS MADE WITHIN THE FUNCTION
	}
	int sumNm1 = sum(n - 1); // FIRSTLY WHEN THE 1 VALUE IS RETURNED BACK TO THIS "FUNCTION'S PLACE" THEN THATS WHEN THE MAGIC BEGINS

	int sumN = sumNm1 + n; // FIRST TIME AFTER 1 IS RETURNED FROM THE IF STATEMENT THE VALUE OF n is 2 AT THAT TIME, FIRST ADDITION IS 1+2 
	return sumN; //AT FIRST TIME AFTER 1 IS RETURNED IN IF STATEMENT, THIS STATEMENT RETURNS 3 TO THE OTHER FUNCTIONS THAT GOT TRIGGERED AND WENT INTO RECURSIONS IN THE PREVIOUS LINE INSTEAD OF MOVING TO THIS LINE, AND NOW THOSE FUNCTIONS WILL START MOVING TO THIS LINE TO COMPLETE THE FUNCTION AND THE LAST VALUE OF 21 WILL BE RETURNED
}


//*********fibonacci finders
int fib(int n);
int main() {
	printf("%d", fib(3));
	return 0;
}
int fib(int n) {
	if (n == 1)
		return 1;
	else if (n == 0)
		return 0;
	int fib1 = fib(n - 1);
	int fib2 = fib(n - 2);
	return fib1 + fib2;
}


//****************for loop fibonacci finder
long long fibn = 1;
long long fibn_minus1 = 0;
int main() {
	for (int i = 2; i <= 100; i++) {
		long long temp = fibn;
		fibn = fibn + fibn_minus1;
		fibn_minus1 = temp;
		printf("%lld\n", fibn);
	}
}