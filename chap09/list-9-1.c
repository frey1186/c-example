/*
 * 显示字符串字面量的长度
 *
 */

#include <stdio.h>

int main(void){

	printf("Size of \"123\"	: %d \n", (unsigned)sizeof("123"));
	printf("Size of \"ab\\tcd\"	: %d \n", (unsigned)sizeof("ab\tcd"));
	printf("Size of \"aaaaaaaaaaaaabc\\0edf\"	: %d \n", (unsigned)sizeof("abc\0def"));

	return 0;
}
