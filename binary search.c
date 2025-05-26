#include <stdio.h>

int binary_search(int arr[], int n, int key) {
    int l = 0, h = n - 1, mid;

    while (l <= h) {
        mid = (l + h) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {1, 5, 6, 7, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = binary_search(arr, n, key);

    if (result != -1)
        printf("Element is found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
