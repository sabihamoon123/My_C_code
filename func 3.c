#include<stdio.h>

int square (int);

int main(void)
{
int a,total;

printf("input a number: ");
scanf("%d",&a);

total = square(a);

printf("The square is: %d",total);
}

int square(int a)
{
int sqr = 1;
sqr = a*a;
return sqr;
}
