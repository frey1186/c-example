#include <stdio.h>

int main(void){

	int n1, n2;

	puts("pls input 2 number :");
	printf("input n1:"); scanf("%d", &n1);
	printf("input n2:"); scanf("%d", &n2);


	printf("n1和n2的和是%d，积是%d \n", n1+n2, n1*n2);
	printf("n1和n2的平均值：%d \n", (n1+n2)/2 );

	return (0);
}
