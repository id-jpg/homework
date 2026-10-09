#include <stdio.h>

int main () {
	int n = 0;
	int sum = 0;

	printf("Keep entering numbers to sum.\nEnter '0', if you want to stop: ");
	scanf("%d", &n);

	while (n != 0) {
		sum += n; // it's the same as <sum = sum + n>
		scanf("%d", &n);
	}

	if (n == 0) {
		printf("The sum is: %d\n", sum);
	}

	return 0;
}
