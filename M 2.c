#include<stdio.h>
int main ()
{
    float cm, m, km ;
    printf("enter the value of length in centimeter:") ;
    scanf("%f",&cm) ;

    m=(cm/100) ;
    km=(cm/100000) ;

    prinf("the length in meter:%f",m) ;
    printf("the length in kilometer:%f",km) ;

    return 0 ;
}
