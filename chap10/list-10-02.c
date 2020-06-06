/*
 * 显示对象的地址
 */

#include <stdio.h>

int main(void){
	int nx;
	double dx;
	int vc[3];

	printf("nx	address: %p \n", &nx);
	printf("dx	address: %p \n", &dx);
	printf("vc[0]	address: %p \n", &vc[0]);
	printf("vc[1]	address: %p \n", &vc[1]);
	printf("vc[2]	address: %p \n", &vc[2]);

	return 0;
}

