#include <stdio.h>

int main(void){

	int i,no;

	printf("input a number ");scanf("%d", &no);
	
	i = 0;
	while(i<=no) printf("%d ",i++);

	putchar('\n');

	return 0;


}
