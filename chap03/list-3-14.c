#include <stdio.h>
//
//条件运算符， 计算两个数的差
//

int main(void){

	int x, y;
	int max;

	printf("input a number  x:"); scanf("%d", &x);
	printf("input a number  y:"); scanf("%d", &y);
	

	printf("x和y的差是 : %d \n", (x>y)?x-y:y-x);
		

	return (0);

}
