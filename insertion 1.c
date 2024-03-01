#include<stdio.h>
int main ()
{
    int a[100], n, i, item, k, j;
    printf("enter the elements in array:") ;
    scanf("%d", &n) ;
    for(i=0;i<n;i++){
        printf("the elements:\n") ;
        scanf("%d",&a[i]) ;
    }
    j=n ;
    printf("enter the value you want to insert:") ;
    scanf("%d",&item) ;
    printf("input the location you want to insert:") ;
    scanf("%d", &k) ;
    while(j>=k){
        a[j+1]=a[j] ;
        j-- ;
    }
    a[k]=item ;
    n=n+1 ;
    for(i=0;i<n;i++){
        printf("the elements:%d\n", a[i]) ;
    }
}
