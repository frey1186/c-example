#include <stdio.h>

// 计算x的位数
int count_bits(unsigned x){
	int count = 0;
	while (x) {
		if (x & 1U) count++;
		x >>= 1;
	}

	return count;
}

// 返回 unsigned 数的位数 
int int_bits(void){
	return count_bits(~0U);
}

// 打印 位串内容
int print_bits(unsigned x){
	int i;
	for (i=int_bits()-1;i>=0;i--){
		putchar(((x>>i)&1U)?'1':'0');
	}
}

int main(void){
	
	unsigned nx;
	printf("input a + number : ");scanf("%u", &nx);
	print_bits(nx);
	putchar('\n');

	return 0;
}
