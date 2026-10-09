#include <stdio.h>

int main () {
	int n = 0;
	int s = 0;
	int a = 1;

	printf("Enter any positive number: ");
	scanf("%d", &n);

	while (a <= n) {
		s = s+a;
		a = a+1;
	}

	printf("The sum of all preceding numbers and the given number: %d\n", s);

	return 0;
}
