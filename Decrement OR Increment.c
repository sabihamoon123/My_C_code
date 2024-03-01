#include <stdio.h>

int main(void) {
    int n ;
    scanf("%d", &n) ;
    if(n%4==0){
        n+=1 ;
       // printf("%d\n", n) ;
    }
    else
    n-=1 ;
    printf("%d\n", n) ;

    return 0;
}