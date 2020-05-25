#include <stdio.h>

int main(void){

	int i,no;

	printf("input a number ");scanf("%d", &no);
	
	i = 1;
	while(i<=no) printf("%d ",i++);
	
	if(no>=0) putchar('\n');

	return 0;


}
