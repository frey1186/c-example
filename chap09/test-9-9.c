/*
 * 将字符串字节逆向转换
 * 如s为REC，修改为CER
 */

#include <stdio.h>

int len_string(char s[])
{
	int len = 0;
	while (s[len]) len++;
	return len;
}

void rev_string(char s[])
{
	char tmp_s[128];
	int len = len_string(s);
	for(int i=0;i<len;i++){
		tmp_s[i]=s[len-i-1];
	}
	for(int i=0;i<len;i++){
		s[i]=tmp_s[i];
	}
}

int main(void)
{
	char str[128];
	printf("input a string: "); scanf("%s", str);	

	rev_string(str);
	printf("the rev string is : ");
	int i =0;
	while (str[i]) putchar(str[i++]);
	printf("\n");
	
	return 0;
}
