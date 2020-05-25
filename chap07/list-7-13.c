//
//求出数组元素的个数
//

#include <stdio.h>

int main(void){
	int vi[10];
	double vd[25];

	printf("sizeof vi = %d\n", (unsigned)(sizeof(vi)/sizeof(vi[0])));
	printf("sizeof vd = %d\n", (unsigned)(sizeof(vd)/sizeof(vd[0])));


	return 0;
}
