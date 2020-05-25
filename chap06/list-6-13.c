//
//计算数组中的最高分
//

#include <stdio.h>
#define NUMBER 5

int maxof(const int va[], int no){
	int i;
	int max = va[0];
	for(i=0;i<no;i++){
		if(va[i]>max) max = va[i];
	}
	return max;

}

int main(void){
	int va[NUMBER]={1,2,3,4,5};

	printf("va最大值是：%d\n", maxof(va, NUMBER));
	return 0;
}
