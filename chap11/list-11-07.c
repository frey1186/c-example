/*
 * 复制字符串
 */


#include <stdio.h>

char *str_cpy(char *d, const char *s){
	char *t = d;

	while (*d++ = *s++) ;
	return t;
}

int main(void){
	char s1[128]="abcd";
	char s2[128]="defs";

	for (int i=0;i<5;i++){
		printf("s1[%d] address is %p ; s2[%d] address is %p \n", i, &s1[i], i, &s2[i]);
	}

	printf("input a string: "); scanf("%s", s1);

	str_cpy(s2,s1);

	printf("S1: %s	%p \n", s1, s1);
	printf("S2: %s	%p \n", s2, s2);
	
	for (int i=0;i<5;i++){
		printf("s1[%d] address is %p ; s2[%d] address is %p \n", i, &s1[i], i, &s2[i]);
	}
	return 0;
}
