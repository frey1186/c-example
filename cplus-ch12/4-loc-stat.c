#include <stdio.h>

void func(void);

int main(void){
	int i;
	for(i=0;i<3;i++){
		func();
	}
	return 0;
}


void func(void){
	int i = 1;
	static int j = 1; //静态变量只在编译时被初始化1次
	/*这条static语句感觉不像是func函数的一部分，执行的时候会被跳过
	 * 因为静态变量和文件作用域的变量在程序被装载到内存的时候已经
	 * 执行完毕，不会再次执行。
	 * 也叫作局部静态变量
	 * 也叫作块作用域的静态变量*/
	printf("i = %d  j = %d \n", i++, j++);
}
