
#include<stdio.h>
int main()
{
   int a,b,n,sum ;
   printf("enter the highest value:") ;
   scanf("%d",&a) ;
   printf("enter the lowest value:") ;
   scanf("%d",&b) ;

   n=((a-b)/1)+1 ;
   printf("number of value:%d",n) ;

   //পদ সংখ্যা = [(শেষ পদ – প্রথম পদ)/ সাধারণ অন্তর] + ১
   //সমষ্টি/ শ াঘফল = [(১ম পদ + শেষ পদ) * পদসংখ্যা] / 2

   sum=(b+a)*n/2 ;
   printf("the sum:%d",sum) ;

   return 0 ;



}



