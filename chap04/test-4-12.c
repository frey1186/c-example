//
//
//计算 1 + 2 +3 + 。。+5
//

#include <stdio.h>

int main(void){

	int no;
	int sum=0;
	
	for(no=0;no<5;no++) sum+=no+1;
	printf("sum(1..5)= %d \n", sum);
	return 0;

}
