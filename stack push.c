
#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size], top=-1, i;

void push(int ele){
    if (top>=size-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        stack[top]=ele;
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
    int array[]={17,5,123,25,12}, ele;
    for( i=0; i<5; i++){
        stack[i]=array[i];
        top++;
    }
    printf("Enter the value to push = \n");
    scanf("%d", &ele);
    push(ele);

    show();
    return 0;
}
