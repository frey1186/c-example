//
// 整数和浮点数的平方
//

#include <stdio.h>

#define sqr(x) (x*x)

int main(void){
	int nx;
	double dx;

	printf("请输入一个整数：");scanf("%d", &nx);
	printf("该数的平方是：%d\n", sqr(nx));

	printf("请输入一个浮点数：");scanf("%lf", &dx);
	printf("该数的平方是：%f\n", sqr(dx));

	return 0;
}
