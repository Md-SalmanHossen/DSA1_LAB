#include<stdio.h>
int main()
{
   int arr[]={5,2,1,6,3};
   int n=sizeof(arr)/sizeof(arr[0]);

   printf("before sorting: ");
   for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
   }

   for(int i=1;i<=n;i++){
      int temp=arr[i];
      int j=i-1;

      while(j>=0&& arr[j]>temp){
         arr[j+1]=arr[j];
         j--;
      }
      arr[j+1]=temp;      

   }

   printf("\nafter insertion sort: ");
   for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
   }

   return 0;
   
}