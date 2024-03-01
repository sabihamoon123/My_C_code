#include<stdio.h>
int main ()
{
    int i, n, a[100], sum=0 ;
    printf("enter the elements in array:") ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    printf("\n\n") ;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]) ;
        printf("\n\n") ;
        sum=sum+a[i] ;
    }
    printf("the sum is %d", sum) ;
    return 0 ;
}
