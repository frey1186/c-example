//
// 显示九九乘法表
//

#include <stdio.h>

int main(void){
	
	int i,j;

	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
			
			printf("%d*%d=%-2d ",i,j,i*j);
		}
		putchar('\n');
	}
	putchar('\n');

	return 0;
}

