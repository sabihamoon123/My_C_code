#include<stdio.h>
int main ()
{
   float r, area, circumference ;
   printf("enter the radius of circle:",r) ;
   scanf("%f",&r) ;
   area=3.1416*r*r ;
   circumference=2*3.1416*r ;
   printf("area of circle:%f",area) ;
   printf("circumference of circle:%f",circumference) ;


   return 0 ;
}
