#include <stdio.h>

int main(void){
	int i,j,ln;

	printf("直角三角形有几层：");scanf("%d", &ln);

	for(i=0;i<ln;i++){
		for(j=0;j<ln;j++){
			if(j<ln-i)putchar(' ');
			else putchar('*');
		}
		putchar('\n');
	}
	putchar('\n');
}
