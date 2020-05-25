//
//
//计算 1 + 2 +3 + 。。+5
//

#include <stdio.h>

int main(void){

	int x,y;
	int sum=0;


	printf("input x:");scanf("%d", &x);
	printf("input y:");scanf("%d", &y);
	
	int b,s;
	b = (x>y)?x:y;
	s = (x<y)?x:y;

	printf("%d和%d之间的整数和是：", s,b);
	
	do{
		sum = sum + s;
		s = s + 1;
	}while(s <= b);

	printf("%d \n", sum);
	return 0;

}
