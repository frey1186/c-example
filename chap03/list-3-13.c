#include <stdio.h>
//
//条件运算符
//

int main(void){

	int x, y;
	int max;

	printf("input a number  x:"); scanf("%d", &x);
	printf("input a number  y:"); scanf("%d", &y);
	
	max = (x>y)?x:y;

	printf("max number is : %d \n", max);
		

	return (0);

}
