#include <stdio.h>
#include <limits.h>

int main(void){
	
	printf("这个编译器的char型是：");
	
	if (CHAR_MIN)
		puts("signed.");
	else
		puts("unsigned.");


	return 0;
}
