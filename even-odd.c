#include <stdio.h>

int main() {
    int n;

    printf("Check whether your number is even or odd: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
