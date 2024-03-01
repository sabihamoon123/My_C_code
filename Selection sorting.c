#include<stdio.h>
int main ()
{
    int arr[100], n, i,j, t, a , min, temp;
    printf("enter the elements in array:") ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        printf("elements\t") ;
        scanf("%d",&arr[i]) ;
    }
    for(i=0;i<n;i++)
    {
        min=i ;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])

                min=j ;

            temp=arr[i] ;
            arr[i]=arr[min] ;
            arr[min]=temp ;
        }

    }
    for(i=0;i<n;i++)
        {
            printf("the result %d\n", arr[i]) ;
            scanf("%d",&arr[i]) ;
        }
        return 0 ;
}
