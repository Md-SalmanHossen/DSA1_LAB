#include<stdio.h>
int main()
{
   int arr[]={5,2,1,6,3};
   int n=sizeof(arr)/sizeof(arr[0]);

   printf("before bubble sorting: ");
   for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
   }

   for(int i=0;i<=n;i++){
      for(int j=0;j<n-i-1;j++){

         if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
         
      }

   }

   printf("\nafter bubble sort: ");
   for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
   }

   return 0;
   
}