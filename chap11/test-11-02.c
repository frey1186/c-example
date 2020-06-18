#include <stdio.h>
#include <string.h>

char *str_chr(const char *str, char c)
{
	// 找到str中第一个c
	char *t = str;
	while (t++)  if (*t==c) return t;
}

int main(void){
	char st[] = "abc123ccccc";
	// printf("len of %s is %ld\n", st, strlen(st));
	printf("First '%c' in '%s' address is : %p \n", 'c', st, str_chr(st, 'c'));
	printf("%s address is %p \n", st, st);
	return 0;
}