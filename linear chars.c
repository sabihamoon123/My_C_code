#include<stdio.h>
#include<string.h>
int main(){

    char a[50];
    char b;


    printf("  Enter the string:\n");         //Sabiha Mahjabin Moon- ID 221002236
    //here we take string
    gets(a);
    int k=0,i;
    printf("Enter the string for search:\n");   //Sabiha Mahjabin Moon- ID 221002236
    // we take a character for searchig
    scanf("%c",&b);
// we take loop for check first to last for our searching character
    for ( i = 0; i < strlen(a); i++)
    //strlen means lenght of our charater array
    {
        if(a[i]==b){
            printf(" Found at: %d and index %d \n",i+1,i);          //Sabiha Mahjabin Moon- ID 221002236
            k++;// when we find  character ++ for confirmed is the character is there or not

        }
    }
    if(k==0){
        // when k value is not change than we don't get the characher that we want
        printf("Sorry Not found");
    }




}
