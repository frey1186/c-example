#include <stdio.h>


int main(void){
	int i ;
	double vc[5];

	for (i=0;i<5;i++){
		vc[i]=i+0.1;
	}

	for (i=0;i<5;i++){
		printf("vc[%d]=%.1f\n", i, vc[i]);
	}
	
	return 0;

}
