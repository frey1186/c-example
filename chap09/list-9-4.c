/*
 * 字符串的读取
 *
 */

#include <stdio.h>

int main(void){

	char name[20];    // 必须指定字符串的长度

	printf("请输入您的名字：");scanf("%s", name);

	printf("your name is %s . \n", name);


	return 0 ;
}
