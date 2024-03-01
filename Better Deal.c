#include <stdio.h>

int main() {
    int t, a,b,p,q ;
    scanf("%d", &t) ;
    for (int i = 1 ; i<=t ; i++){
        scanf("%d %d", &a, &b) ;
        p=abs(100*a/100)-100 ;
        q=abs(200*b/100)-200 ;
        if(p<q){
            printf("SECOND\n") ;
        }
        else if(p==q){
            printf("BOTH\n") ;
        }
        else{
            printf("FIrST\n") ;
        }
    }

    return 0;
}