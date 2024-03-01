#include <stdio.h>

int main(void) {
    int t , x;
    scanf("%d", &t) ;
    for (int i = 1 ; i<=t ; i++){
        scanf("%d", &x) ;
       if(x>65){
           printf("Overload\n") ;
       } 
       else if(x<35){
           printf("Underload\n") ;
       }
       else{
           printf("Normal\n") ;
       }
    }
   
    

    return 0;
}
