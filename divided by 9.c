#include<stdio.h>
void main(){
int j, sum=0 ;
printf("numbers between 100 and 200, divisible by 9: \n") ;
  for(j=101;j<200;j++){
    if(j%9==0){
        printf("%d", j) ;
        sum=sum+j ;
    }
}
printf("\nthe sum\n :%5d ", sum) ;
return 0 ;


}
