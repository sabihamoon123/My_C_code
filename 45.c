#include<stdio.h>
int main ()
{
    int sum=0, i, n ;
    scanf("%d",&n) ;
    for (i=1;i<=n;i++)
    {
        sum=sum+i*(i+1) ;
    }
        if (i==1)
        {
        printf("%d*%d+",i,i+1) ;
        }
        else if (i==n)
        {
        printf("%d*%d",n,n+1) ;
        }
        else {
        printf("%d*%d",i,i+1) ;
        }

    printf("=%d",sum) ;
    return 0 ;
    }
