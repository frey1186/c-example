//
//计算数组中的最xiao zhi 
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

int minof(const int va[], int no){
	int i;
	int min = va[0];
	for(i=0;i<no;i++){
		if(va[i]<min) min = va[i];
	}
	return min;
}

int main(void){
	int va[NUMBER]={1,2,3,4,5};

	printf("va最大值是：%d\n", maxof(va, NUMBER));
	printf("va最xiao值是：%d\n", minof(va, NUMBER));
	return 0;
}
