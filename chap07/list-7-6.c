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
	
	unsigned na, nb;

	puts("input two numbers：");
	printf("input A: ");scanf("%d", &na);
	printf("input B: ");scanf("%d", &nb);

	printf("\nA = 		"), print_bits(na);
	printf("\nB = 		"), print_bits(nb);
	printf("\nA & B =		"), print_bits(na & nb);
	printf("\nA | B =		"), print_bits(na | nb);
	printf("\nA ^ B =		"), print_bits(na ^ nb);
	printf("\n~A =		"), print_bits(~na);
	printf("\n~B =		"), print_bits(~nb);

	putchar('\n');

	return 0;
}
