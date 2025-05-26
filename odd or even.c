#include <stdio.h>

int main() {
    int i, n, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Even numbers are:\n");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d\n", a[i]);
        }
    }

    printf("Odd numbers are:\n");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}
