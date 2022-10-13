#include<stdio.h>
int main ()
{
    int a[100], b[100], c[100], i, j=0, k=0, n ;
    printf("enter the elments in array:\n") ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    printf("the elements in array:\n") ;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]) ;
    }
    printf("\n\n") ;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0){
            b[j]=a[i] ;
            j++ ;
        }
        else{
            c[k]=a[i] ;
            k++ ;
        }
    }
    printf("\nthe even elements are :\n") ;
    for(i=0;i<j;i++)
    {
        printf("even elements %d\n",b[i]) ;
    }
    printf("\nthe odd elements are :\n") ;
    for(i=0;i<k;i++)
    {
        printf("odd elements %d\n",c[i]) ;
    }
    return 0 ;

}

