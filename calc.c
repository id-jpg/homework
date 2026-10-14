#include <stdio.h>

int main () {
	int a = 0;
	int b = 0;
	char o = 0;
	char c = 'y';

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	printf("Enter the operator (+, -, *, /): ");
	scanf(" %c", &o);

	while (c == 'y' || c == 'Y') {
		if (o == '+') {
			printf("Result: %d\n", a+b);
		} else if (o == '-') {
			printf("Result: %d\n", a-b);
		} else if (o == '*') {
			printf("Result: %d\n", a*b);
		} else {
			printf("Result: %d\n", a/b);
		}
		printf("To continue press Y(y): ");
		scanf(" %c", &c);

		if (c == 'y' || c == 'Y') {
			printf("Enter two numbers: ");
			scanf("%d %d", &a, &b);
			printf("Enter the operator (+, -, *, /): ");
			scanf(" %c", &o);
		}
	}

	return 0;
}
