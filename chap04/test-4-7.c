#include <stdio.h>

int main(void){

	int no;

	printf("input a number ");scanf("%d", &no);
	
	while(no>0) printf("%d ",no--);

	putchar('\n');

	return 0;


}
