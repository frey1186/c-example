#include <stdio.h>

int main(void){

	int no;

	printf("input a number :");scanf("%d", &no);

	int i;
	for(i=0;i<no;i++){
		printf("%d",(i+1)%10);
	}
	putchar('\n');

	return 0;

}
