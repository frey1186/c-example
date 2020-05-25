#include <stdio.h>

int main(void){

	int x;
	printf("input a number : "); scanf("%d", &x);

	if ( x % 5 )
		puts("不能被5整除。");
	else
		puts("能被5整除");

	return (0);
}
