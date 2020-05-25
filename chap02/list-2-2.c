#include <stdio.h>

int main(void){

	int x;

	printf("input a number :");
	scanf("%d", &x);

	printf("最后一位是：%d", x % 10 );

	return (0);
}
