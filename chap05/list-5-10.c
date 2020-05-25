#include <stdio.h>

#define NUMBER 5 // va length

int main(void){

	int i;
	int va[NUMBER];
	int sum=0;

	for(i=0;i<NUMBER;i++){
		printf("input va[%d]: ", i);
		scanf("%d", &va[i]);
		sum += va[i];
	}
	
	printf("sum is :%d \n", sum);
	printf("avg is :%.2f \n", (double)sum/NUMBER);

	return 0;
}
