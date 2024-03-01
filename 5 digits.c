#include<stdio.h>
int main()
{
    int n, r, sum=0 ;
    printf("enter the number : ") ;
    scanf("%d",&n) ;
    while(n!=0){
        r=r%10 ;
        sum=sum+r ;
        n=n/10 ;
    }
    float avg=sum/5 ;
    printf("the average = %.3f", avg) ;
    return 0 ;

}
