//
// 输出左下角三角形
//

#include <stdio.h>

void put_stars(int n){
	while (n--) putchar('*');
}


int main(void){
	
	int i;
	int ln;

	printf("三角形有几层：");
	scanf("%d", &ln);

	for (i=0; i<ln; i++){
	
		put_stars(i+1);
		putchar('\n');
	}


	putchar(100);

	return 0;

}
