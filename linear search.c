#include<stdio.h>
int main ()
{
   int a[100], i, value, n, pos=-1 ;
   printf("enter the elements in array:") ;
   scanf("%d",&n) ;
   for (i=0;i<n;i++)
   {
       scanf("%d" ,&a[i]) ;
   }
   printf("enter the value you want to search:") ;
   scanf("%d",&value) ;
   for(i=0;i<n;i++)
   {
       if(value==a[i])
       {
           pos=i+1 ;
           break ;
       }
   }
   if(pos==-1)
   {
       printf("item is not found:") ;
   }
   else{
    printf("item is found at :%d \n", pos) ;
   }

}
