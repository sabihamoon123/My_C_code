#include<stdio.h>
int main ()
{
    int a[100], i, Low, Upp, n, Mid, value, pos ;
    printf("enter the elements in array:") ;
    scanf("%d", &n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    printf("enter the value to search:") ;
    scanf("%d",&value) ;
    while(Low<=Upp)
    {
      Mid=(Low+Upp)/2 ;
    if(a[Mid]==value)
    {
        printf("item found at %d \n", Mid) ;
        return 0 ;
    }
    else if(a[Mid]<value)
        Low=Mid+1 ;


    else(a[Mid]>value) ;
        Upp=Mid-1 ;
        break ;


    }
    if(pos==-1){
     printf("item not found ") ;
    }
    else{
    printf("item  found at %d \n", pos) ;

}
}
