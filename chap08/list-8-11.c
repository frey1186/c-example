/*
 *
 * 从标准输入直接标准输出
 *
 */

#include <stdio.h>

int main(void){

	int ch;

	while ( (ch = getchar()) != EOF)
		putchar(ch);

	return 0;
}
