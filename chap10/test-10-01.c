/*
 * 1个整数
 * 小于0 改为0
 * 大于100 改为100
 *
 */

#include <stdio.h>

void adjust_point(int *a) {
	(*a<0)?(*a=0):*a;
	(*a>100)?(*a=100):*a;
}



int main(void){
	int a;

	printf("input a number: "); scanf("%d", &a);
	adjust_point(&a);

	printf("adjust point: %d \n", a);

	return 0;
}
