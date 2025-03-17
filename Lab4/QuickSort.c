#include <stdio.h>

int findPivot(int arr[], int start, int end) {
   int pivot = arr[end];
   int i = start - 1;

   for (int j = start; j < end; j++) {
      if (arr[j] < pivot) {
         i++;
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
      }
   }
   i++;
   
   int temp = arr[i];
   arr[i] = arr[end];
   arr[end] = temp;

   return i;
}

void quickSort(int arr[], int start, int end) {

   if (start >= end) {
      return;
   }
   int pivot = findPivot(arr, start, end);
   quickSort(arr, start, pivot - 1);
   quickSort(arr, pivot + 1, end);

}

int main() {
   int arr[] = {5, 2, 1, 6, 3};
   int n = sizeof(arr) / sizeof(arr[0]);

   printf("Before Quick Sort: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }

   quickSort(arr, 0, n - 1);

   printf("\nAfter Quick Sort: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }

   return 0;
}
