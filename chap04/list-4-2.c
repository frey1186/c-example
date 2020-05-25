#include <stdio.h>

int main(void){

	int num;

	do{
		printf("input a number:");scanf("%d", &num);
		if(num<0) printf("pls input a number >0 \n");
	
	}while(num<0);
	
	printf("这个整数的逆向显示结果是：");
	
	do{
		printf("%d", num%10);
		num = num/10;
	
	}while(num>0);
	
	printf("\n");

	return 0;
}
