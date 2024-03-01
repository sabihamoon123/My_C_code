#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack [size], top=-1, i ;
void push(int elem){
   if(top>=size-1){
    printf("stack is overflow\n") ;
   }
   else{
    top++ ;
    stack[top]=elem ;
   }
}
void show(){
if(top>=0){
    printf("the stack is:\n") ;
    for(i=top;i>=0;i--){
        printf("%d\n", stack[i]) ;
    }
}
else{
    printf("the stack is empty\n") ;
}
}
int main ()
{
    int a[]={1,4,2,5}, elem ;
    for(i=0;i<4;i++){
        stack[i]=a[i] ;
        top++ ;
    }
    printf("enter the value to push:\n") ;
    scanf("%d",&elem) ;
    push(elem) ;
    show() ;
    return 0 ;
}


