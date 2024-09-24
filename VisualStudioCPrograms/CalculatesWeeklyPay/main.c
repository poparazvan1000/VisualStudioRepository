#include <stdio.h>

int main() {
	printf("*******Calculates Weekly Pay******\n\n");

	printf("Enter the number of hours worked in a week: ");
	int numHours = 0;
	const double basicPayRate = 12;
	const int numHoursOvertime = 40;

	scanf_s("%d", &numHours);

	if (numHours <= numHoursOvertime) {

	}

	system("pause");
	return 0;
}