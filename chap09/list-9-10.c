/*
 * 计算字符串中数字字符的个数
 */

#include <stdio.h>

void str_dcount(const char s[], int cnt[]){
	// 计算函数
	int i = 0;
	while (s[i]) {
		if (s[i]>='0' && s[i]<='9'){
			cnt[s[i]-'0']++;
		}
		i++;
	}
}


int main(void){
	char str[128];
	int cnt[10]={0};
	int i;

	printf("input a string: ");
	scanf("%s", str);

	str_dcount(str, cnt);

	puts("数字字符出现的次数：");
	for(i=0;i<10;i++){
		printf("'%d': %d \n", i, cnt[i]);
	}
	return 0;
}
