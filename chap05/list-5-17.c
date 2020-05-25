//
//计算质数
//
#include <stdio.h>

#define NUMBER 1000

int main(void){
	
	int i, j;
	long c=0;
	
	for (i=1;i<NUMBER;i+=2){
		for(j=3;j<=i;j+=2){
			c++;
			if(i%j == 0) break;
		}
		if(i == j) printf("%3d \n", i);
		
	}
	
	printf("运算次数：%d. \n", c);
	return 0;

}
