#include <stdio.h>

#define MSG  "hello"

int main(void){

	const char* const pc = MSG;
	char s[] = "hello2";

	//pc = s;

	printf("%s \n", pc);
	printf("%p \n", pc);
	printf("%p \n", s);
	printf("%p \n", MSG);


	return 0;
}
