/*
 * 显示str N 次数
 */

#include <stdio.h>

void put_str(const char s[], int n){ 
	while (n--) { 
		int i=0;
		while (s[i]) putchar(s[i++]);
	}
}

int main(void){ 
	char str[128];

	printf("input a string: ");
	scanf("%s", str);

	printf("显示字符串5次：");
	put_str(str, 5);
	printf("\n");

	return 0;
}
