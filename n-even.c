#include <stdio.h>

int main () {
	int n = 0;
	int a = 0;

	printf("Enter any positive number: ");
	scanf("%d", &n);
	printf("Even numbers: ");

	while (a <= n) {
		if (a % 2 == 0) {
			printf("%d ", a);
		}
		a++;
	}

	printf("\n");

	return 0;
}
