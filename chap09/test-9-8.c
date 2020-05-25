/*
 * 逆向显示字符串
 */

#include <stdio.h>

void put_stringr(const char s[]){ 
	char tmp_str[]={};
	int i = 0;
	while (s[i]) { 
		tmp_str[i]=s[i];
		i++;
	}
	tmp_str[i]='\0';
	putchar(s[i]);
	put_stringr(tmp_str);
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
