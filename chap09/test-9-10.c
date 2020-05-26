/*
 * 删除字符串中的数字
 */

#include <stdio.h>

void del_digit(char s[]) {
	int i=0;
	int j=0;
	char tmp[128];
	while (s[i]) {
		if (s[i]>='0' && s[i]<='9') 
		{
			i++;
		} else {
			tmp[j++]=s[i++];
		}
	}
	int k=0;
	while (tmp[k]) {
		s[k]=tmp[k];
		k++;
	}
	s[k]='\0';
}


int main(void){
	int i=0;
	char str[128];

	printf("input a string: "); scanf("%s", str);

	del_digit(str);
	
	printf("delete the digit: ");
	while(str[i]) putchar(str[i++]);
	
	putchar('\n');
	return 0;
}


