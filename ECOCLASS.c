#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n); 
	int s[n],d[n],count=0;
	for(int i=0;i<n;i++){
	    scanf("%d",&s[i]);
	}
	 	for(int i=0;i<n;i++){
	    scanf("%d",&d[i]);
	}
	 for(int i=0;i<n;i++){
	     if(s[i]==d[i]){
	         count++;
	     }
	     
	 }   
	     printf("%d\n",count);
	}
	return 0;
}

