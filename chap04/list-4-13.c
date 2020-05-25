#include <stdio.h>

int main(void){

	int i , no;
	printf("input a number :");scanf("%d", &no);

	for (i=0;i<=no;i++) putchar('*');
	putchar('\n');

	return 0;

}
