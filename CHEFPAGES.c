#include <stdio.h>

int main(void) {
    int a, b ;
    scanf("%d %d", &a, &b) ;
    if(a==0){
        printf("https://www.codechef.com/practice\n") ;
    }
    else if (b==0){
        printf("https://www.codechef.com/contests\n");
    }
    else{
        printf("https://discuss.codechef.com\n") ;
    }
   // scanf("%d %d", &a, &b) ;

    return 0;
}