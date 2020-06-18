/*
 * 用数组 和 指针 实现的字符串数组  有什么区别？
 */


#include <stdio.h>

int main(void){
	int i ;
	char st[3][6] = {"Turbo", "NA", "DOHC"};
	char *pt[3] = {"12345", "12", "1234"};

	for (i=0;i<3;i++) printf("st[%d] = %s , st[%d] address = %p\n", i, st[i], i, st[i]);
	for (i=0;i<3;i++) printf("pt[%d] = %s , pt[%d] address = %p\n", i, pt[i], i, pt[i]);

	

	printf("size of int = %d \n", sizeof(int));
	printf("size of size_t = %d \n", sizeof(size_t));
	return 0;
}
