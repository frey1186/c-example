#include <stdio.h>

int maxof(int x,int y){
	return x>y?x:y;
}


int main(void){
	
	int x,y;

	puts("input 2 numbers:");
	printf("input x :");scanf("%d", &x);
	printf("input y :");scanf("%d", &y);
	
	printf("较大的数是：%d\n", maxof(x,y));

	return 0;
}
