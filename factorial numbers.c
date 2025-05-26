#include <stdio.h>

int main() {
    int i, n;
    long long fac = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        printf("Factorial is 1\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        fac *= i;
    }

    printf("Factorial of %d is %lld\n", n, fac);
    return 0;
}
