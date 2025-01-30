#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;

    if (arr[mid] <= arr[j]) {
        return;
    }

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            i++;
        } else {
            int value = arr[j];
            int index = j;

            while (index > i) {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[i] = value;

            i++;
            mid++;
            j++;
        }
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*
#include<stdio.h>
void swap(int *a,int *b){
    *a=*a ^ *b;
    *b=*a ^ *b;
    *a=*a ^ *a;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //N^2 T.C
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    //N*logN T.C
    printf("sorted array will be : ");

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);

    }    
    

    return 0;
}

*/