#include <stdio.h>

int main(void){
	
	int x;
	double y;

	printf("输入身高(单位cm)："); scanf("%d", &x);

	y = (x - 100) * 0.9;

	printf("你的标准体重是：%3.1f 公斤。\n", y);

	return (0);

}



