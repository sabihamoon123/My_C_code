#include <stdio.h>

int main() {
    int A, B, C, t ;
    scanf("%d", &t) ;
    for(int i = 1 ; i<=t ; i++){
        scanf("%d %d %d", &A, &B, &C) ;
        if(A<C && A<B){
            printf("Draw\n") ;
        }
        else if(A>B && B<C) {
            printf("Bob\n") ;
        }
        else{
            printf("Alice\n") ;
        }
        //printf("%d\n", x+d) ;
    }

    return 0;
}