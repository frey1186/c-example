//
//计算质数
//
#include <stdio.h>

#define NUMBER 1000

int main(void){
	
	int i, j;
	
	for (i=2;i<NUMBER;i++){
		for(j=2;j<=i;j++){
			
			if(i%j == 0) break;
		}
		if(i == j) printf("%3d \n", i);
		
	}

	return 0;

}
