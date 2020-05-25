#include <stdio.h>

#define NUMBER 5 // va length

int main(void){

	int i;
	int va[NUMBER];
	int max,min;

	for(i=0;i<NUMBER;i++){
		printf("input va[%d]: ", i);
		scanf("%d", &va[i]);

		if(i==0) max = min = va[0];
		max = (max>va[i])?max:va[i];
		min = (min<va[i])?min:va[i];
	}
	
	printf("max is :%d \n", max);
	printf("min is :%d \n", min);

	return 0;
}
