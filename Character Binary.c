#include<stdio.h>
#include<string.h>
int main ()
{
    char arr[50], b ;
    int i, k=0 ;
    printf("enter the sring(sorting):") ;
    gets(arr) ;
    printf("enter the element you want to search:") ;
    scanf("%c",&b) ;
    int low_bound=0, up_bound=strlen(arr)-1, beg=low_bound, end=up_bound, Loc=-1 ;
    while (beg<=end){
       int Mid=(beg+end)/2 ;
       if (arr[Mid]==b){
        Loc=Mid+1 ;
        printf("the element is found at :%d", Loc) ;
        return 0 ;
       }
       if (arr[Mid]>b){
        end=Mid-1 ;
       }
       else
        beg=Mid+1 ;
       }
       if (Loc==-1){
        printf("the element not found:") ;
       }
    }

