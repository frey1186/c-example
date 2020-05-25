//
// 计算平方差
//

#include <stdio.h>

int diff(int x,int y){
	return x>y?x-y:y-x;
}

int sqr(int x){
	return x * x ;
}

int cube(int x){
	return x * x * x;
}


int main(void){
	
	int x,y;

	puts("input 2 numbers:");
	printf("input x :");scanf("%d", &x);
	printf("input y :");scanf("%d", &y);
	
	printf("x和y的平方差是：%d\n", diff(sqr(x),sqr(y)));
	printf("x和y的立方差是：%d\n", diff(cube(x),cube(y)));

	return 0;
}
