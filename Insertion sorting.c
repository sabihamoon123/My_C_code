#include<stdio.h>
int main ()
{
    int arr[100], n, i,j, t, a ;
    printf("enter the elements in array:") ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        printf("elements\t") ;
        scanf("%d",&arr[i]) ;
    }
    for(j=1;j<i;j++)
    {
        t=arr[j] ;
        a=j-1 ;
        while(a>=0&&t<arr[a])
        {
            arr[a+1]=arr[a] ;
            a-- ;
        }
        arr[a+1]=t ;
    }
   // printf("the sorted array is:%d\n") ;
    for(i=0;i<n;i++)
    {
        printf("the sorted array is:%d\n",arr[i]) ;
        scanf("%d\n", &arr[i]) ;
    }
}
