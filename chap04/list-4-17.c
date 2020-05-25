#include <stdio.h>

int main(void){

	int i,j;
	int x,y;

	printf("让我们来绘制一个长方形：\n");
	printf("width :");scanf("%d", &x);
	printf("height :");scanf("%d", &y);

	for(i=0;i<y;i++){
		for(j=0;j<x;j++){
			putchar('*');	
		}
		putchar('\n');
	}
	putchar('\n');
	
	return 0;
}
