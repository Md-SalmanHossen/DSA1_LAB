#include<stdio.h>
int fact(int n){
   if(n==1){
      return 1;
   }
   return fact(n-1)*n;
}
int main()
{
   int res=fact(4);
   printf("fact : %d ",res);

   return 0;
}