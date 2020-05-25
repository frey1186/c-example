#include <stdio.h>

int main(void){

	int no;

	printf("input a number ");scanf("%d", &no);
	
	while(no-- > 0) putchar('*');

	putchar('\n');
	
	printf("%d\n",no);
	return 0;


}
