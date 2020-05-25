#include <stdio.h>

int main(void){

	int x, y, z;
	int sum;
	double ave;

	printf("input a number x :"); scanf("%d", &x);
	printf("input a number x :"); scanf("%d", &x);
	printf("input a number z :"); scanf("%d", &z);
	
	sum = x + y + z;
	ave = (double)sum/3 ;


	printf("sum: %5d\n", sum );
	printf("ave: %5.1f\n", ave );

	return (0);
}
