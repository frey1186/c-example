#include <stdio.h>

int main(void){

	int i;
	int va[8];

	for(i=0;i<8;i++){
		printf("input va[%d]:",i);scanf("%d", &va[i]);
	}


	int tmp;
	for(i=0;i<4;i++){
		tmp = va[i];
		va[i] = va[7-i];
		va[7-i] = tmp;
	}

	

	for(i=0;i<8;i++){
		printf("va[%d]: %d\n", i,va[i]);
	}


	return 0;
}
