#include<stdio.h>
int main ()
{
    int arr[100], n, i, item, k, j ;
    printf("enter the elements in array:") ;
    scanf("%d", &n) ;
    for(i=0;i<n;i++)
    {
        printf("the elements:\t") ;
        scanf("%d", &arr[i]) ;
    }
    j=n ;
    printf("input the number you want to insert:") ;
    scanf("%d", &item) ;
    printf("input the location you want to insert:") ;
    scanf("%d", &k) ;
    while(j>=k)
    {
        arr[j+1]=arr[j] ;
        j-- ;
    }
    arr[k]=item ;
    n=n+1 ;
    for(i=0;i<n;i++)
    {
        printf("the elements: %d\n", arr[i]) ;

    }
}
