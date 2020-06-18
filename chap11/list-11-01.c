/*
 * 数组字符串和指针字符串
 *
 */

#include <stdio.h>


int main(void){
	char str[] = "abc";
	char *ptr = "123";

	printf("str = %s \n", str);
	printf("ptr = %s \n", ptr);

	printf("str address = %p \n", str);
	printf("ptr address = %p \n", ptr);


//	str = "ABC";
	ptr = "456";


	printf("str = %s \n", str);
	printf("ptr = %s \n", ptr);


	printf("str address = %p \n", str);
	printf("ptr address = %p \n", ptr);

	return 0 ;
}

