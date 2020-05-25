#include <stdio.h>

#define NUMBER 5 // va length

int main(void){

	int i;
	int va[NUMBER];
	int vb[NUMBER];

	for(i=0;i<NUMBER;i++){
		printf("input va[%d]: ", i);
		scanf("%d", &va[i]);

		if(va[i]>=60) vb[i] = va[i];
	}
	
	for(i=0;i<NUMBER;i++){
		if(vb[i]>0) 
			printf("vb[%d]=%d\n",i, vb[i]);
	}
	
	return 0;
}
