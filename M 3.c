#include<stdio.h>
int main ()
{
    float celcius, fahrenheit ;
    printf("enter the temperature in celcius:") ;
    scanf("%f",&celcius) ;

    printf("enter the temperature in fahrenheit:") ;
    scanf("%f",&fahrenheit) ;

    celcius=((fahrenheit-32)*5)/9 ;
    fahrenheit=((celcius*9)/5)+32 ;

    printf("the temperature in celcius:%f",celcius) ;
    printf("the temperature in fahrenheit:%f",fahrenheit) ;

    return 0 ;
}

