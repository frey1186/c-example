/*
 * 二值互换
 *
 */

#include <stdio.h>

void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void){
	
	int a, b;

	puts("input two numbers: ");
	printf("number A : "); scanf("%d", &a);
	printf("number B : "); scanf("%d", &b);

	swap(&a, &b);

	printf("swap numbers: %d, %d \n", a, b);
	return 0 ;
}
