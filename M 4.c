#include<stdio.h>
int main ()
{
    int sub1, sub2, sub3, sub4, sub5, sum, avarage ;

    printf("enter the number of first subject:") ;
    scanf("%d",&sub1) ;

    printf("enter the number of second subject:") ;
    scanf("%d",&sub2) ;

    printf("enter the number of third subject:") ;
    scanf("%d",&sub3) ;

    printf("enter the number of fourth subject:") ;
    scanf("%d",&sub4) ;

    printf("enter the number of fifth subject:") ;
    scanf("%d",&sub5) ;

    sum=sub1+sub2+sub3+sub4+sub5 ;
    avarage=sum/5 ;

    printf("the total number of 5 subject:%d\n",sum) ;
    printf("the avarage number of 5 subject:%d\n",avarage) ;

    return 0 ;
}
