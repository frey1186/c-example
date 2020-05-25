//
// 所有元素置0
//

#include <stdio.h>
#define NUMBER 5

int maxof(int va[], int no){
	int i;
	int max = va[0];
	for(i=0;i<no;i++){
		if(va[i]>max) max = va[i];
	}
	return max;

}

void set0(int va[], int no){
	
	int i ;
	for(i=0;i<no;i++){
		va[i] = 0;
	}
}

int main(void){
	int va[NUMBER]={1,2,3,4,5};

	printf("va最大值是：%d\n", maxof(va, NUMBER));

	puts("--> 元素置0 :");
	set0(va, NUMBER);
	for(int i=0;i<NUMBER;i++){
		printf("va[%d]= %d \n", i, va[i]);
	}
	return 0;
}
