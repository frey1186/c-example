#include <stdio.h>

int main(void){

	int i;
	int va[5];

	for(i=0;i<5;i++){
		printf("input va[%d]:",i);scanf("%d", &va[i]);
	}

	for(i=0;i<5;i++){
		printf("va[%d]: %d\n", i,va[i]);
	}


	return 0;
}
