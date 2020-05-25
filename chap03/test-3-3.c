#include <stdio.h>

int main(void){

	int x;

	printf("input a number  x:"); scanf("%d", &x);

	if (x < 0)
		printf("x的绝对值：%d\n", -x);
	else
		printf("x的绝对值：%d\n", x);

	return (0);

}
