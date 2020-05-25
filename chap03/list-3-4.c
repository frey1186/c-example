#include <stdio.h>

int main(void){

	int x;
	printf("input a number : "); scanf("%d", &x);

	if ( x % 2 )
		puts("x是奇数");
	else
		puts("x是偶数");

	return (0);
}
