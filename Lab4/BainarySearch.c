#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
   int lower = 0; 
   int high = n - 1;

   while (lower <= high) {
      int mid = (lower + high) / 2;

      if (arr[mid] == target) return mid;  
      else if (arr[mid] < target) lower = mid + 1;  
      else high = mid - 1;  
   }
   return -1; 
}

int main() {
   int arr[] = {2, 3, 5, 7, 8, 10, 15, 17, 20};
   int n = sizeof(arr) / sizeof(arr[0]);
   int target = 17;

   printf("Array elements: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }


   int index = binarySearch(arr, n, target);

   if (index != -1) printf("\nElement found at index: %d\n", index);
   else printf("Element not found.\n");
   printf("Target value: %d\n", target);

   return 0;
}
