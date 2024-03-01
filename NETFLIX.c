#include <stdio.h>

int main(void) {
    int a, b, c, x, t ;
    scanf("%d", &t) ;
    for (int i = 1 ; i<=t ;i++){
        scanf("%d %d %d %d", &a, &b, &c, &x) ;
        if(a+b>=x || b+c>=x || a+c>=x){
            printf("YES\n") ;
        }
        else
        {
            printf("NO\n") ;
        }
    }

    return 0;
}