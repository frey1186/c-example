/*
 * 二值互换   错误例子
 *
 */

#include <stdio.h>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void){
	
	double a, b;

	puts("input two float numbers: ");
	printf("number A : "); scanf("%lf", &a);
	printf("number B : "); scanf("%lf", &b);

	swap(&a, &b);

	printf("swap numbers: %f, %f \n", a, b);
	return 0 ;
}
