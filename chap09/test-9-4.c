/*
 * 输出字符串中字符c的个数
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
	return str[i]?i:-1;
}


int str_chnum(const char str[], const char c) {

	int i = 0;
	int count = 0;
	while (str[i]){
		if (str[i] == c) count++;
		i++;
	}
	return count;

}



int main(void){
	char st[100];
	printf("pls input strings: ");
	scanf("%s", st);

	printf("字符串%s长度为%u.\n", st, str_length(st));
	printf("字符%c在字符串%s中的所有位置是%u.(从0开始)\n", 'c', st, str_char(st, 'c'));
	printf("字符串%s中的字符%c的个数是：%d.\n",  st, 'c', str_chnum(st, 'c'));

	return 0;
}
