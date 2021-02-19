#include <stdio.h>

static int count;

int func(void);

int main(void){
	int i;
	for(i=0;i<10;i++){
		printf("func has been called %d time(s) \n", func());
	}
	return 0;
}

int func(void){
	return ++count;
}
