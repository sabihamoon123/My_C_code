
#include <stdio.h>

int main()
{
  int sum=0;

  long int i,n, t=1;
  printf("Input the number or terms : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {  sum=sum+t;
     printf("%ld  ",t);

     t=(t*10)+1;
  }
  printf("\nThe Sum is : %ld\n",sum);
  return 0;
}
