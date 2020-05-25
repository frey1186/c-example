//
//


#include <stdio.h>

#define max(x,y) (x>y?x:y)

int main(void){

	int a=1;
	int b=2;
	int c=3;
	int d=4;

	printf("max(max(a,b), max(c,d))= %d\n", max(max(a,b),max(c,d)));
	printf("max(max(max(a,b),c),d)=%d\n", max(max(max(a,b),c),d));

	return 0;
}
