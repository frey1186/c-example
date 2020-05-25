#include <stdio.h>

int main(void){
	int i,j,ln;

	printf("直角三角形有几层：");scanf("%d", &ln);
	
	puts("左上方三角形");
	for(i=0;i<ln;i++){
		for(j=ln;j>i;j--){
			putchar('*');
		}
		putchar('\n');
	}
	putchar('\n');

	puts("右上方三角形");
	for(i=0;i<ln;i++){
		for(j=ln;j>0;j--){
			if(j>ln-i) putchar(' ');
			else putchar('*');
		}
		putchar('\n');
	}
	putchar('\n');


	return 0;
}
