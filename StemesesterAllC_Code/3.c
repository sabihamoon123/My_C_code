#include<stdio.h>
int main ()
{
    int i, n, a[100], b[100] ;
    printf("enter the elements to be stored in array:") ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]) ;
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i] ;
    }
    printf("\nthe elements stored in the first array:") ;
    printf("\n\n") ;
    for(i=0;i<n;i++)
    {
        printf("%5d\n",a[i]) ;
    }
    printf("\n\nthe copied elements are in second array:") ;
    printf("\n\n") ;
    for(i=0;i<n;i++)
    {
        printf("%5d\n",b[i]) ;
    }
    return 0 ;
}
