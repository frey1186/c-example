/*
 * 遍历显示str
 */

#include <stdio.h>

void put_str(const char s[]){ 
	int i=0;
	while (s[i]) putchar(s[i++]);
}

int main(void){ 
	char str[128];

	printf("input a string: ");
	scanf("%s", str);

	printf("显示字符串");
	put_str(str);
	printf("\n");

	return 0;
}
