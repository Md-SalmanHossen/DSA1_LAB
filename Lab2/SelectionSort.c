#include<stdio.h>
int main()
{
   int arr[]={5,2,1,6,3};
   int n=sizeof(arr)/sizeof(arr[0]);

   printf("before sorting: ");
   for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
   }

   for(int i=0;i<n;i++){
      //int min=arr[i];
      int min_index=i;
      
      for(int j=i+1;j<n;j++){
         
         //asc if(arr[j]<arr[min_index]) min_index=j;
         if(arr[j]>arr[min_index]) min_index=j;
      }

      int temp =arr[i];
      arr[i]=arr[min_index];
      arr[min_index]=temp;
   }

   printf("\nafter insertion sort: ");
   for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
   }

   return 0;
}