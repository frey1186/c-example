#include <stdio.h>

int main(void){
	static int va[5] = {0};

	for(int i=0;i<5;i++){
		static int va[5] = {1};
		printf("va[%d] = %d \n", i, va[i]);

	}
	return 0 ;
}
