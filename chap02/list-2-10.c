#include <stdio.h>

int main(void){

	int x, y;

	printf("input a number x :"); scanf("%d", &x);
	printf("input a number y :"); scanf("%d", &y);

	// printf("x和y的平均值是%f \n", (x + y)/2.0 );
	printf("x和y的平均值是%f \n", (double)(x + y)/2 );

	return (0);
}
