/*
 * 判断输入的字符串中第一个出现字母c的下标 从0开始，没有显示-1
 *
 */

#include <stdio.h>


unsigned str_length(const char str[]){
	unsigned len = 0;
	while (str[len])  len++;
	return (len);
}


int str_char(const char str[], const char c){

	int i = 0;
	while (str[i] != c) i++;
	if (str[i]) 
		return i;
	else
		return -1;
		

}



int main(void){
	char st[100];
	printf("pls input strings: ");
	scanf("%s", st);

	printf("字符串%s长度为%u.\n", st, str_length(st));
	printf("字符%c在字符串%s中的所有位置是%u.(从0开始)\n", 'c', st, str_char(st, 'c'));

	return 0;
}
