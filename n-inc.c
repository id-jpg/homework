#include <stdio.h>

int main () {
	int n = 0;
	int a = 1;

	printf("Enter any positive number: ");
	scanf("%d", &n);
	printf("Voila: ");

	while (a <= n) {
		printf("\t%d\n", a);
		a = a+1;
	}

	return 0;
}
