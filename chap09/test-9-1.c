/*
 * 打印字符串的数组
 *
 */

#include <stdio.h>

int main(void){
	
	char str[]="ABC\\0DEF";
	// char str = "ABC\\0DEF";   必须使用数组的形式来赋值，否则str就是单个字符，不是字符串，会报错
	// char str[]="ABC\0DEF";   如果不用转义字符的话，后面的DEF就不会被读入并赋值给str
	printf("str = %s \n", str);

	return 0;
}
