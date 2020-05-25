#include <stdio.h>

int main(void){

	int i,no;

	printf("input a number ");scanf("%d", &no);
	
	i = 2;
	while(i<=no) {
		printf("%d ",i);
		i *= 2;
	}
	if(no>=0) putchar('\n');

	return 0;


}
