#include <stdio.h>

int main() {
    int n, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Target to search: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Target found at index: %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Target not found in the array.\n");
    }

    return 0;
}