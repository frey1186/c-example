/*
 * 字符串大小写转换，数字不变
 */

#include <stdio.h>

int main(void){
	char str[128];
	int i=0;
	printf("input a string: ");scanf("%s", str);
	
	while (str[i]){
		if (str[i]>='a' && str[i]<='z'){
			putchar(str[i]-'a'+'A');
		} 
		else if (str[i]>='A' && str[i]<='Z'){
			putchar(str[i]-'A'+'a');
		} 
		else {
			putchar(str[i]);
		}
		i++;
	}

	putchar('\n');

	return 0;
}
