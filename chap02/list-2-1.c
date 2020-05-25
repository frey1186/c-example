#include <stdio.h>

int main(void){

	int x,y;

	puts("input two number:");
	printf("input x: "); scanf("%d", &x);
	printf("input y: "); scanf("%d", &y);


	printf("x + y = %d \n", x + y);
	printf("x - y = %d \n", x - y);
	printf("x * y = %d \n", x * y);
	printf("x / y = %d \n", x / y);
	printf("x %% y = %d \n", x % y);

	return (0);
}
