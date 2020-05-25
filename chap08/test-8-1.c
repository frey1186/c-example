
#include <stdio.h>

#define sqr(x) (x*x)
#define diff(x,y) (x>y?x-y:y-x)

int main(void){
	int x, y;

	printf("请输入一个整数：");scanf("%d", &x);
	printf("请输入一个整数：");scanf("%d", &y);
	printf("x与y的差：%d\n", diff(x,y));
	printf("(3-1)*(4-2)=%d\n", diff(1,3)*diff(2,4));

	return 0;
}
