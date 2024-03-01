#include <stdio.h>

int main(void) {
    int t , m, n, k ;
    scanf("%d", &t) ;
    for (int i = 1 ; i<=t ; i++){
        scanf("%d %d %d",&m, &n, &k) ;
        if (n*k<m){
            printf("YES\n") ;
        }
        else
        printf("NO\n") ;
    }
   
    

    return 0;
}