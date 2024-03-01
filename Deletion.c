#include<stdio.h>
int main ()
{
    int arr[100], i, j, k, item, n ;
    printf("enter the elements in array:") ;
    scanf("%d", &n) ;
    for(i=0;i<n;i++)
    {
        printf("the elements:\t") ;
        scanf("%d",&arr[i]) ;
    }
   // printf("enter the number you want to delete:") ;
    //scanf("%d",&item) ;
    printf("enter the location you want to delete:") ;
    scanf("%d",&k) ;
    j=k ;
    arr[k]=item ;
    while(j<=n-1)
    {
        arr[j]=arr[j+1] ;
        j++ ;
    }
    n=n-1 ;
    for(i=0;i<n;i++)
    {
        printf("the elements:%d\n",arr[i]) ;
    }
    return 0 ;
}
