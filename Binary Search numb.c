#include<stdio.h>
int main ()
{
    int arr[100], n, i, numb, Loc=-1, low_bound=0, up_bound, k=0 ;
    printf("enter the elements in array: \n") ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        printf("the elements\t") ;
        scanf("%d",&arr[i]) ;
    }
    int beg=low_bound, end=up_bound, Mid ;
    printf("enter the number you want to search: \n") ;
    scanf("%d", &numb) ;
    while(beg<=end)
    {
        int Mid=(beg+end)/2 ;

        if(arr[Mid]==numb){
           // Loc=Mid+1;
            printf("the number is found at %d ", Loc+1) ;
            return 0 ;
        }
        if(arr[Mid]>numb){
            end=Mid-1 ;
        }
        else if (arr[Mid]<numb){
            beg=Mid+1 ;
        }


    }
    k++ ;
    if(k>0){
            printf("the number is not found:") ;
        }
        return 0 ;
}
