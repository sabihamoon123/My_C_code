#include<stdio.h>

int main(void)
{
int n,i,sum=0,b=1;

printf("Please enter the range: ");
scanf("%d",&n);

for (i=1;i<=n;i++)
{
sum+=b;
b=b*10+1;
printf("%d + ",b);
}
printf("...");
printf("\nSum is: %d",sum);
}
