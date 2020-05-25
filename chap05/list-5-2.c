#include <stdio.h>


int main(void){
	
	int vc[5];
	int i;

	vc[0] = 1;
	vc[1] = 1;
	vc[2] = 2;
	vc[3] = 3;
	vc[4] = 4;

	for(i=0;i<5;i++) printf("vc[%d]=%d\n",i,vc[i]);


	return 0;

}
