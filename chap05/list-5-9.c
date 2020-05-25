#include <stdio.h>

int main(void){
	int i;
	int va[5];
	int sum=0;

	for(i=0;i<5;i++){
		printf("input va[%d]: ", i);
		scanf("%d", &va[i]);
		sum += va[i];
	}
	
	printf("sum is :%d \n", sum);
	printf("avg is :%.2f \n", (double)sum/5);

	return 0;
}
