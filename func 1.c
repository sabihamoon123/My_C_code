#include<stdio.h>

int sum(int,int);

int main(void)
{
int numb1,numb2,total;

printf("Please enter the first number: ");
scanf("%d",&numb1);

printf("\nPlease enter the second number: ");
scanf("%d",&numb2);

total = numb1+numb2;

printf("%d",total);
}

int sum(int numb1,int numb2)
{
int sum=0;
sum = numb1+numb2;
return sum;
}
