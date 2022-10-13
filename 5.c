#include<stdio.h>
int main ()
{
    int a[100], b[100], c[200], i, j, k, n1, n2, n3 ;
    printf("enter the elements in first array: ") ;
    scanf("%d", &n1) ;
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n1;i++)
    {
        printf("%d\n",a[i]) ;

    }

    printf("\n\n") ;
    printf("enter the elements in second array:") ;
    scanf("%d", &n2) ;
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]) ;
    }
    for(i=0;i<n1;i++)
    {
        printf("%d\n",b[i]) ;
    }
    n3=n1+n2 ;
    for(i=0;i<n1;i++)
    {
        c[i]=a[i] ;
    }
    for(j=0;j<n2;j++)
    {
        c[i]=b[j] ;
        i++ ;
    }
    for(i=0;i<n3;i++)
    {
        for(k=0;k<n3-1;k++)
        {
            if(c[k]<=c[k+1]){
                j=c[k+1] ;
                c[k+1]=c[k] ;
                c[k]=j ;
            }
        }
    }
    printf("\n\n") ;
    printf("\nthe merged array in descending order is:\n") ;
    for(i=0;i<n3;i++)
    {
        printf("%d\n", c[i]) ;
    }
    return 0 ;



}
