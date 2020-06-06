/*
 * 计算两个整数的和与差
 */

#include <stdio.h>

void sum_diff(int a, int b, int *sum, int *diff){
	*sum = a + b;
	*diff = (a>b)? a-b: b-a;
}

int main(void){
	int na,nb;
	int wa=0, sa=0;

	puts("input two numbers:");
	printf("int A :"); scanf("%d", &na);
	printf("int B :"); scanf("%d", &nb);


	sum_diff(na, nb, &wa, &sa);

	printf("两数之和：%d, 两数之差：%d \n", wa, sa);
	return 0;
}
