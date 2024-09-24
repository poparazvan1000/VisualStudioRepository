#include <stdio.h>

int main() {
	printf("*******IfElseConditions******\n\n");

	printf("Enter your age: \n");
	int age = 0;
	scanf_s("%i", & age);

	if (age < 18) {
		printf("You are a child");
	}
	else if (age < 65) {
		printf("You are an adult who should work");
	}
	else
		printf("You should retire.");
	printf("\n");

	system("pause");
	return 0;
}