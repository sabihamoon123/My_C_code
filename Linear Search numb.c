#include<stdio.h>
int main ()
{
    int arr[100], n, i, numb, Loc=-1 ;
    printf("enter the elements in array:   \n") ;
    scanf("%d", &n) ;
    for(i=0;i<n;i++)
    {
        printf("the elements\t") ;
        scanf("%d", &arr[i]) ;
    }
    printf("enter the number you want to search:   \n") ;
    scanf("%d", &numb) ;
    for(i=0;i<n;i++)
    {
        if(numb==arr[i]){
            Loc=i+1 ;
            break ;
        }

    }
    if(Loc==-1){
        printf("the number is not found :  \n") ;
    }
    else
        printf("the number is found at : %d    \n", Loc) ;
}
