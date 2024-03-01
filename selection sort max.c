
#include<stdio.h>
int main ()
{
    int i, j, n, a[100], max, b, pos, temp;
    printf("enter the elements in array:") ;
    scanf("%d", &n) ;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]) ;
    }
    for(i=n-1; i>=0; i--)
    {
        max = i ;
        for(j=i-1; j>=0; j--)
        {
            if(a[j]>a[max])
                    max=j ;
        }
        temp=a[i] ;
        a[i]=a[max] ;
        a[max]=temp ;
    }
    printf("the result:" ) ;
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]) ;
    }
}
