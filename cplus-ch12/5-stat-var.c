#include <stdio.h>

int number;   // 外部变量，不初始化，默认也是0

void func(void);

int main(void){
	int number = 1;  // 必须初始化，否则xxx
	int i;
	for(i=0;i<3;i++){
		printf("main number:%d\n", number++);
	}
	func();
	return 0;
}

void func(void){
	extern int number;  // 
	int i;
	for(i=0;i<3;i++){
		printf("func number:%d\n", number++);
	}	
}
