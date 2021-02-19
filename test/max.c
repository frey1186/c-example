#include <stdio.h>

int *max(int *a, int *b){
	int *tmp;
	if( *a > *b ) tmp = a;
	else tmp = b;

	printf("a = %p b = %p \n", a, b);

	return tmp;
}

int main(void){
	
	int x = 1000;
	int y = 200;

	printf("x = %d %p \n", x, &x);
	printf("y = %d %p \n", y, &y);

	printf("max of x and y is %d \n", *max(&x, &y));

	return 0;
}
