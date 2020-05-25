#include <stdio.h>

int main(void){

	int i,j;
	int x,y;

	printf("让我们来绘制一个长方形：\n");
	printf("一边:");scanf("%d", &x);
	printf("另一边 :");scanf("%d", &y);
	
	int tmp;
	if(x<y){
		tmp = x;
		x = y;
		y = tmp;
	}

	for(i=0;i<y;i++){
		for(j=0;j<x;j++){
			putchar('*');	
		}
		putchar('\n');
	}
	putchar('\n');
	
	return 0;
}
