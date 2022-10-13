#include<stdio.h>
int main ()
{
    int a[100], n, max, min, i ;
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
    max=a[0] ;
    min=a[0] ;
    for(i=1;i<n;i++)
    {
        if(a[i]>max){
            max=a[i] ;
        }
        if(a[i]<min){
            min=a[i] ;
        }
    }
    printf("\n maximum element is %d\n", max) ;
    printf("\n minimum element is %d\n", min) ;
    return 0 ;
}
