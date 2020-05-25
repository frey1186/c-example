#include <stdio.h>
//
//计算3个数中的最xiao值
//

int main(void){

	int x, y, z;
	int min;

	printf("input a number  x:"); scanf("%d", &x);
	printf("input a number  y:"); scanf("%d", &y);
	printf("input a number  z:"); scanf("%d", &z);
	
	min = x ;
	if (y < min) min = y;
	if (z < min) min = z;

	printf("min number is : %d \n", min);
		

	return (0);

}
