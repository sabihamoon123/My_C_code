#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size], top=-1, i;

void pop(){
    if (top<=-1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        while(stack[top]!=123){
            top--;
        }
        if(stack[top]==123){
            top--;
        }
    }
}
void show(){
    if (top>=0)
    {
        printf("The stack is = \n");
        for ( i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
    else
    {
        printf("Stack is empty\n");
    }
}

int main(){
    int i, array[]={17,5,123,25,12,83}, ele;
    for( i=0; i<=5; i++){
        stack[i]=array[i];
        top++;
    }
    pop();
    show();
    printf("Top is = %d\n", top);
    return 0;
}

