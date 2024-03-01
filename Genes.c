#include <stdio.h>

int main(void) {
	// your code goes here
	char eye1,eye2;
	scanf("%c %c",&eye1,&eye2);
	if (eye1=='R'||eye2=='R')
	printf("R");
	else if (eye1==eye2)
	printf("%c\n",eye1);
	else 
	printf("B");
	return 0;
}
