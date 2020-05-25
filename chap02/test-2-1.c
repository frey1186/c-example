#include <stdio.h>

int main(void){

	int x, y;

	printf("input a number x :"); scanf("%d", &x);
	printf("input a number y :"); scanf("%d", &y);

	printf("x是y的百分之%d%% \n", 100 * x / y );

	return (0);
}
