#include<stdio.h>
int main ()
{
    int a[100],  n, i, j, k, m, temp ;
    printf("enter the elements in array:") ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]) ;
    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
          if(a[j]<a[i]){
            temp=a[i] ;
            a[i]=a[j] ;
            a[j]=temp ;
          }
      }
    }
    printf("\n elements of array sorted in ascending order:\n") ;
    for(i=0;i<n;i++){
        printf("%d\n",a[i]) ;
    }
   for(i=0;i<n;i++)
   {
        printf("enter the new value:") ;
        scanf("%d",&m) ;
       }
   for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]) ;
    }
printf("the existing sorted list :\n") ;
for(i=0;i<n;i++)
{
    printf("%d\n",a[i]) ;
}
}
