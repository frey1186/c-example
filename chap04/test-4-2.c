//
//
// 计算非负整数的位数
//

#include <stdio.h>

int main(void){

	int num;

	do{
		printf("input a number:");scanf("%d", &num);
		if(num<0) printf("pls input a number >0 \n");
	
	}while(num<0);
	
	printf("%d的位数是：", num);
	int dig=0;
	do{
		num = num/10;
		dig+=1;
	
	}while(num>0);
	
	printf("%d\n", dig);

	return 0;
}
