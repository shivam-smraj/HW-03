#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // (a) Maximum value
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("(a) Maximum value: %d\n", max);

    // (b) Minimum value
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("(b) Minimum value: %d\n", min);

    // (c) Average value
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float average = (float)sum / n;
    printf("(c) Average value: %.2f\n", average);

    // (d) Sum of odd numbers
    int oddSum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            oddSum += arr[i];
        }
    }
    printf("(d) Sum of odd numbers: %d\n", oddSum);

    // (e) Print array in reverse order
    printf("(e) Array in reverse order: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}