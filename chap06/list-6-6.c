#include <stdio.h>

int maxof(int x,int y){
	return x>y?x:y;
}


int main(void){
	
	int x,y, z, w;

	puts("input 3 numbers:");
	printf("input x :");scanf("%d", &x);
	printf("input y :");scanf("%d", &y);
	printf("input z :");scanf("%d", &z);
	printf("input w :");scanf("%d", &w);
	
	printf("较大的数是：%d\n", maxof(maxof(x,y),maxof(z,w)));

	return 0;
}
