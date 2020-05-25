#include <stdio.h>


int pow4(int x){

	return x * x * x * x;
}

int main(void){
	
	int x;

	printf("input a number :");scanf("%d", &x);

	printf("x的四次幂：%d\n", pow4(x));

	return 0;

}

