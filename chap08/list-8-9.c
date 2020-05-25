/*
 *
 * 计算标准输入流中的数字出现次数
 *
 * 注意：cygwin环境中EOF是 Ctrl+D
 *
 */



#include <stdio.h>

int main(void){
	int i, ch;
	int cht[10]={0};

	while (1) {
		ch = getchar();
		if (ch == EOF) break;
		if (ch >= '0' && ch <='9')
			cht[ch - '0']++;
	}
	puts("输入字符出现的次数:");
	for (i=0;i< 10;i++){
		printf("'%d': %d\n", i, cht[i]);
	}

	return 0;
}
