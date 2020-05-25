#include <stdio.h>

int maxof(int x,int y, int z){
	int max = x;
	if(y>max) max = y;
	if(z>max) max = z;

	return max;
}
int minof(int x,int y, int z){
	int min = x;
	if(y<min) min = y;
	if(z<min) min = z;

	return min;
}

int main(void){
	
	int x,y, z;

	puts("input 3 numbers:");
	printf("input x :");scanf("%d", &x);
	printf("input y :");scanf("%d", &y);
	printf("input z :");scanf("%d", &z);
	
	printf("较大的数是：%d\n", maxof(x,y,z));
	printf("较小的数是：%d\n", minof(x,y,z));

	return 0;
}
