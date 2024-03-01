#include<stdio.h>
int main ()
{
    int a[10] , i ;
    printf("enter 10 elements in array:") ;

    for(i=0;i<10;i++)
    {
        //printf("\n\n") ;
        scanf("%d",&a[i]) ;
    }
    printf("\n\n") ;

    for(i=0;i<10;i++)
    {
       // printf("\n\n") ;
        printf("%d\n",a[i]) ;

    }

    return 0 ;
}
