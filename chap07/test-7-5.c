//
// 无符号数 会不会溢出？
//
#include <stdio.h>

int main(void){
	unsigned short int x=60000;
	unsigned short int y=6000;
	
	unsigned short int z;
	z = x + y;
	
	short int x1 = 30000;
	short int y1 = 3000;
	short int z1 ;
	z1 = x1 + y1;

	printf("无符号数相加：%d + %d = %d\n", x, y, z);
	printf("有符号数相加：%d + %d = %d\n", x1, y1, z1);

	return 0;
}
