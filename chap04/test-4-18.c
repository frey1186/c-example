#include <stdio.h>

int main(void){

	int no;
	int i,j;

	printf("三角形层数: ");scanf("%d", &no);

	for(i=0;i<no;i++){
		for(j=0;j<no-i;j++) putchar(' ');
		for(j=0;j<2*i+1;j++) putchar('*');
		putchar('\n');
	}

	return 0;

}
