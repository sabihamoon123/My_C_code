#include<stdio.h>
int main ()
{
    int a[100], i, n ;
    printf("enter the number of elements in array:") ;
    scanf("%d",&n) ;

    for (i=0;i<n;i++)
    {
        scanf("%5d", &a[i]) ;
    }

    printf("the elements in array:") ;
    printf("\n\n") ;

    for(i=0;i<n;i++)
    {
        printf("%5d\n",a[i]) ;
    }

    printf("the reverse elements in array:") ;
    printf("\n\n") ;

    for(i=n-1;i>=0;i--)
    {
        printf("%5d\n",a[i]);

    }

    return 0 ;

}
