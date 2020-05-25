/*
 * 计算标准输入流中的行数
 *
 */

#include <stdio.h>

int main (void){

	int cnt = 0;
	int ch;

	while(1){
		ch = getchar();
		if( ch == '\n') cnt++;
		if( ch == EOF) break;
	}

	printf("标准输入的行数是 %d .\n", cnt);

	return 0;
}
