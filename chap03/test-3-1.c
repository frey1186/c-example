#include <stdio.h>

int main(void){

	int x;
	int y;

	printf("input a number x: "); scanf("%d", &x);
	printf("input a number y: "); scanf("%d", &y);

	
	if ( x % y ) 
		printf("y不是x的约数。\n");
	else
		printf("y是x的约数。\n");


	return (0);
}
