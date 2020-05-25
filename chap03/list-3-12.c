#include <stdio.h>
//
//计算3个数中的最大值
//

int main(void){

	int x, y, z;
	int max;

	printf("input a number  x:"); scanf("%d", &x);
	printf("input a number  y:"); scanf("%d", &y);
	printf("input a number  z:"); scanf("%d", &z);
	
	max = x ;
	if (y > max) max = y;
	if (z > max) max = z;

	printf("max number is : %d \n", max);
		

	return (0);

}
