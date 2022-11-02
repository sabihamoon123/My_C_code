#include<stdio.h>
int main()
{

    char str[100] ;
    gets(str) ;
    int i, flag=1, len=strlen(str) ;
    for(i=0 ;i<len/2; i++)
    {
        if (str[i]==str[len-1-i])
        {
            printf("the string is palendrome %s", str) ;
        }
        else {
            flag=0 ;
            break ;
        }
    }
}
