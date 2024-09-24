#include <stdio.h>

int addUsingPointers(const int* a, const int* b) {
	printf("The sum of %d and %d is %d\n", *a, *b, *a + (*b));
	return *a + (*b);
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void squareInteger(int* x) {
	int temp = *x;
	*x = temp*temp;
	printf("The square of the number is %d\n", *x);
}