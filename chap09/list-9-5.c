/*
 * 格式化显示字符串
 *
 * 、
 */

#include <stdio.h>


int main(void){

	char str[]="12345";

	printf("%s\n",		str);
	printf("%3s\n",		str);
	printf("%.3s\n",	str);
	printf("%8.3s\n",		str);
	printf("%-8.3s\n",	str);

	return 0;
}
