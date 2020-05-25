#include <stdio.h>

unsigned rrotate(unsigned x, int n){

	return x>>=n;	
}

unsigned lrotate(unsigned x, int n){
	return x<<=n;
}

int main(void){

	unsigned int x = 12345;
	int n = 3;

	printf("%d 右移 %d = %d \n", x, n, rrotate(x, n));
	printf("%d 左移 %d = %d \n", x, n, lrotate(x, n));

	return 0;
}
