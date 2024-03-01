#include <stdio.h>

int main(void) {
	int t,i,count,n;
	
	scanf("%d",&t);
	
	while(t--){
	    count = 0;
	    
	    scanf("%d",&n);
	    
	    int a1[n];
	    for(i = 0 ; i < n ; i++){
	           scanf("%d",&a1[i]);
	    }

	    for(i = 0; i < n ; i++){
	        if(a1[i] >= 10 && a1[i] <= 60){
	            count++;
	        }
	    }
	    printf("%d\n",count);

	   
	}
	return 0;
}
