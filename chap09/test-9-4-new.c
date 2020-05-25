/*
 * clear a string
 */

#include <stdio.h>

void null_string(char str[]){ 
	str[0]='\0';
}

int str_length(const char str[]){ 

	int len=0;
	while (str[len]) len++;
	return len;
}

int main(void){ 
	char str[100];
	printf("input a string: ");
	scanf("%s", str);

	printf("你输入的字符串长度是：%d \n", str_length(str));
	null_string(str);
	printf("claer后的长度是：%d \n", str_length(str));

	return 0;
}
