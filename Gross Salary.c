#include <stdio.h>

int main(void) {
    int t, bs;
    scanf("%d", &t) ;
    for(int i = 1 ; i<=t ;i++){
        scanf("%d", &bs) ;
        float hra, da ;
        if(bs<1500){
            hra = bs*0.1 ;
            da = bs*0.9 ;
            printf("%0.2f\n", bs+hra+da) ;
        }
        else{
            hra = 500 ;
            da = bs*0.01*98 ;
            printf("%0.2f\n", bs+hra+da) ;
        }
    }
   
    

    return 0;
}