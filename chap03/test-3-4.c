#include <stdio.h>

int main(void){

	int x, y;

	printf("input a number  x:"); scanf("%d", &x);
	printf("input a number  y:"); scanf("%d", &y);

	if (x == y)
		printf("x = y \n");
	else if (x > y)
		printf("x > y \n");
	else
		printf("x < y \n");
		

	return (0);

}
