#include<stdio.h>
int main()
{
    int arr[100], n, i, j, swap ;
    printf("enter the elements in array:") ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        printf("the elements:\t") ;
        scanf("%d",&arr[i]) ;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                swap=arr[j] ;
                arr[j]=arr[j+1] ;
                arr[j+1]=swap ;
            }
        }
    }
    for(i=0;i<n;i++)

        printf("the sorted list in ascending order:%d\n", arr[i]) ;
        scanf("%d\n", &arr[i]) ;

}
