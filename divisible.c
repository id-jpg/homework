#include <stdio.h>

int main() {
    int n;

    printf("Check whether your number is divisible by both 3 and 5: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
