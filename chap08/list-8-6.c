#include <stdio.h>

int fac(int n){

	if (n>0) 
		return (n*fac(n-1));
	else
		return (1);
}


int main(void){
	int num = 10;

	printf("%d的阶乘是：%d\n", num, fac(num));

	return 0;
}
