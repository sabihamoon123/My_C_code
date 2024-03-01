#include<stdio.h>
int main ()
{
   int a[10], n=6, i ;

   for(i=1;i<=n;i++){
    printf("enter no.%d value:", i) ;
    scanf("%d", &a[i]) ;
   }
   int sum=0 ;
   for(i=1;i<=n;i++)
   {
       sum=sum+a[i] ;
   }
   printf("the sum is :%d\n", sum) ;
   float avg=0 ;
   for(i=1;i<=n;i++)
   {
       avg=sum/n ;
   }
   printf("the avarage is: %.2f", avg) ;
   return 0 ;
}
