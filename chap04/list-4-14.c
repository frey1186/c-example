#include <stdio.h>

int main(void){

	int i, no, tmp;
	int sum = 0;
	
	printf("input counts of numbers: ");scanf("%d", &no);
	
	for(i=0;i<no;i++){
		printf("No %d:", i+1);scanf("%d",&tmp);
		sum += tmp;
	}

	printf("sum of numbers: %d\n", sum);
	printf("ave of numbers: %.2f\n", (double)sum/no);
	
	return 0;
}
