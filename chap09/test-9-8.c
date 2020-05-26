/*
 * 逆向显示字符串
 */

#include <stdio.h>

int put_length(const char s[]){
	int i=0;
	while (s[i]) i++;
	return i;
}

void put_stringr(const char s[]){ 
	int len = put_length(s);
	for(int i=0;i<=len;i++){
		putchar(s[len-i-1]);
	}
}

int main(void){ 
	char str[128];

	printf("input a string: ");
	scanf("%s", str);

	printf("逆向显示字符串：");
	put_stringr(str);
	printf("\n");

	return 0;
}
