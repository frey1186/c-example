/*
 * 显示数组元素的值和地址
 */

#include <stdio.h>

int main(void){

	int i;
	int a[5] = {1, 2, 3, 4, 5};
	char b[5] = {'a','b','c'};
	int* p = a;
	char* q = b;

	for (i=0;i<10;i++){
		printf("a[%d] = %d; *(a+%d) = %d; p[%d] = %d; *(p+%d) = %d \n", 
				i, a[i], i, *(a+i), i, p[i], i, *(p+i));
		printf("&a[%d] = %p; a+%d = %p; &p[%d] = %p; p+%d = %p \n", 
				i, &a[i], i, a+i, i, &p[i], i, p+i);

		printf("b[%d] = %c; &b[%d] = %p \n", i, q[i], i, q+i);
	}
	
	printf("sizeof int = %ld \n", sizeof(int));
	printf("sizeof short int = %ld \n", sizeof(short unsigned int));
	printf("sizeof a = %ld \n", sizeof(a));
	printf("sizeof b = %ld \n", sizeof(b));

	return 0;
}


