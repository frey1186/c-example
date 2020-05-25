#include <stdio.h>

int main(void){

	int x;
	printf("input a number : "); scanf("%d", &x);

	if ( x % 10 == 5  )
		puts("x的个位数是5。");

	return (0);
}
