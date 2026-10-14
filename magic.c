#include <stdio.h>

int main() {
	int n = 0;
	int e = 0;
	char c = 0;
	
	printf("Let's find a *MAGICAL NUMBER* together!!!\nThe number is called magical if the sum of all its digits is divisible by 3 without a remainder.\n");
	do {
		int sum = 0;
		printf("Enter your number: ");
		scanf("%d", &n);
		while (n != 0) {
			e = n % 10;
			sum += e;
			n = n / 10;
		}
		printf("The sum of the digits is %d\n", sum);

		if (sum % 3 == 0) {
			printf("It's a *MAGICAL NUMBER*)))\nCONGRATULATIONS!!!\n");
		} else {
			printf("It's not a *MAGICAL NUMBER*(((\nDon't worry, try another one.\n");
		}
		printf("Type Y(y) if you want to find another *MAGIC*: ");
		scanf(" %c", &c);
	} while (c == 'y' || c == 'Y');

	return 0;
}
