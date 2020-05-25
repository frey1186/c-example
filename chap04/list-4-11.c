#include <stdio.h>

int main(void){

	int i, no, tmp;
	int sum = 0;
	
	printf("input counts of numbers: ");scanf("%d", &no);
	
	i = 0;
	while(i<no){
		printf("No %d:", ++i);scanf("%d",tmp);
		sum += tmp;
	}

	printf("sum of numbers: %d\n", sum);
	printf("ave of numbers: %.2f\n", (double)sum/no);
	
	return 0;
}
