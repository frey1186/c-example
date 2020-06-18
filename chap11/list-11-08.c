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
	char s1[128]="1234567890";
	//char *s2="defs";  这里的defs字符串会保存在一个特殊位置，不允许进行修改；
	char s2[128]="abcdefghijklmn";  // 这里的字符串保存在程序的内存空间内，可以修改；
	
	puts("没复制的时候：");
	for (int i=0;i<5;i++){
		printf("s1[%d]= %c; s1[%d] address is %p ; s2[%d]=%c;s2[%d] address is %p \n",i,s1[i], i, &s1[i], i, s2[i], i, &s2[i]);
	}

	printf("input a string: "); scanf("%s", s1);

	str_cpy(s2,s1);

	puts("复制完了：");

	printf("S1: %s	%p \n", s1, s1);
	printf("S2: %s	%p \n", s2, s2);
	
	for (int i=0;i<5;i++){
		printf("s1[%d]= %c; s1[%d] address is %p ; s2[%d]=%c;s2[%d] address is %p \n",i,s1[i], i, &s1[i], i, s2[i], i, &s2[i]);
	}
	return 0;
}
