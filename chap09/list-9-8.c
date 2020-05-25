/*
 * 判断字符串长度
 *
 */

#include <stdio.h>


unsigned str_length(const char str[]){
	unsigned len = 0;
	while (str[len])  len++;
	return (len);
}



int main(void){
	char st[100];
	printf("pls input strings: ");
	scanf("%s", st);

	printf("字符串%s长度为%u.\n", st, str_length(st));

	return 0;
}
