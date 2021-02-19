#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n = 10;
	//double item[n];
	double* item;
	item = (double*)malloc(n*sizeof(double));
	int i ;
	for(i=0;i<n;i++){
		item[i] = i+1.2;
	}
	for(i=0;i<n;i++){
		printf("%.2f ", item[i]);
	}
	putchar('\n');
	free(item);
	return 0;
}
