//
//
//计算 1 + 2 +3 + 。。+5
//

#include <stdio.h>

int main(void){

	int no=1;
	int sum=0;

	do{
		sum = sum + no;
		no = no + 1;
	}while(no <= 5);

	printf("sum(1..5)= %d \n", sum);
	return 0;

}
