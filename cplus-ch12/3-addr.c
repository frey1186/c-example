#include <stdio.h>
#define MSG "hello"

int a = 100; // 文件作用域
static int b = 200;

void func(void){
	int e = 100;  // 块作用域 block
	printf("var in func e:%p \n", &e);
}

int main(void){

	int c = 100;
	static int d = 200;	

	printf("var in file  a :%p \n", &a);
	printf("static var in file  b :%p \n", &b);
	printf("var in main  c :%p \n", &c);
	printf("static var in main  d :%p \n", &d);
	
	func();

	return 0;
}
