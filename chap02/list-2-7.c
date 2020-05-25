#include <stdio.h>

int main(void){

	double x;
	double y;

	printf("input a number x :"); scanf("%lf", &x);
	printf("input a number y :"); scanf("%lf", &y);

	printf("x + y = %f \n", x + y );
	printf("x - y = %f \n", x - y );
	printf("x * y = %f \n", x * y );
	printf("x / y = %f \n", x / y );
//	printf("x %% y = %f \n", x % y );

	return (0);
}
