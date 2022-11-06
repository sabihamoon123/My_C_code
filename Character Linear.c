#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100], b ;
    printf("enter the character in array:\n") ;
    gets(arr) ;
    int k=0 , i ;
    printf("enter the element you want to search:\n") ;
    scanf("%c",&b) ;
    for(i=0;i<strlen(arr);i++)
    {
        if(arr[i]==b){
            printf("the element is found: %d in index: %d\n",i+1,i) ;
            k++ ;
        }

    }
    if(k==0){
            printf("the element is not found") ;
        }
}
