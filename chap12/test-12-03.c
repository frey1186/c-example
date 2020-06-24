/*
 *   输入结构体的函数
 */

#include <stdio.h>

struct xyz {
	int x;
	long y;
	double z;
};


struct xyz scan_xyz(void){
	struct xyz temp;
	int x; printf("x:"); scanf("%d", &x);
	long y; printf("y:"); scanf("%ld", &y);
	double z; printf("z:"); scanf("%lf",&z);

	temp.x = x;
	temp.y = y;
	temp.z = z;

	return temp;
}


int main(void){
	struct xyz s = {0,0,0};
	s = scan_xyz();

	printf("xyz.x = %d \n", s.x);
	printf("xyz.y = %ld \n", s.y);
	printf("xyz.z = %f \n", s.z);

	return 0;
}
