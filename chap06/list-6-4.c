//
// 计算幂
//

#include <stdio.h>

double power(double x, int no){

	int i;
	double tmp = 1.0;

	for(i=1;i<=no;i++){
		tmp *= x;
	}
	return tmp;
}

int main(void){
	
	double x;
	int y;

	puts("input 2 numbers:");
	printf("input x :");scanf("%lf", &x);
	printf("input y :");scanf("%d", &y);
	
	printf("x的y次幂是：%.2f\n", power(x,y));

	return 0;
}
