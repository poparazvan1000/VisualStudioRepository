#include <stdio.h>

int main() {
	printf("*******ForLoop******\n\n");

	for (int count = 1; count <= 10; ++count) {
		printf(" %d", count);
	}

	for (int i = 1, j = 2; i <= 5; ++i,j = j + 2)
		printf(" %5d", i * j);

	printf("\n");
	system("pause");
	return 0;
}