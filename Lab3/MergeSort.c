#include <stdio.h>

void merge(int arr[], int l, int m, int r) {

    int n1 = m - l + 1, leftArr[n1];
    int n2 = r - m, rightArr[n2];

    // Copy data to temp arrays
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArr[i] = arr[m + 1 + i];
    }

    int i = 0, j = 0, k = l; 

    // Merging the two halves
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from leftArr
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy remaining elements from rightArr
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
      int mid = l + (r - l) / 2;
      mergeSort(arr, l, mid);
      mergeSort(arr, mid + 1, r);
      merge(arr, l, mid, r);
    }
}

int main() {
    int arr[] = {5, 2, 1, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before merge sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    mergeSort(arr, 0, n - 1); 


    printf("\nAfter merge sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
