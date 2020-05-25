#include <stdio.h>


int main(void){
	unsigned int x, y;

	printf("input x: ");scanf("%u", &x);
	printf("input y: ");scanf("%u", &y);

	printf("x >> 2 = %u\n", x>>2);
	printf("x / 2**2 = %u\n", x/2/2);
	printf("x << 2 = %u\n", y<<2);
	printf("x *2 *2 = %u\n", y*2*2);

	return 0;
}
