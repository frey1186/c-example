#include <stdio.h>

int main(void){

	int no;

	printf("input a number ");scanf("%d", &no);
	
	if (no > 0)
		while(no-- > 0) printf("*\n");
	return 0;


}
