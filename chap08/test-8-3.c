//
//
//
//

#include <stdio.h>

#define swap(type,a,b) {type t=a;a=b;b=t;}


int main(void){

	int x = 100;
	int y = 2;

	printf("x=%d, y=%d \n", x, y);
	swap(int, x, y);
	printf("x y交换后：");
	printf("x=%d, y=%d \n", x, y);

	return 0;
}
