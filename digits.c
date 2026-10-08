#include <stdio.h>

int main() {
    int a;
    int sum = 0;

    printf("Enter any positive number: ");
    scanf("%d", &a);
    printf("The last digit is: %d\n", a % 10);

    while (a != 0) {
        sum += a % 10;
        a /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
