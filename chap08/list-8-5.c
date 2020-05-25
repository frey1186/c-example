#include <stdio.h>

enum animal { Dog, Cat, Monkey, Invalid };

void dog(void){ puts("wangwang !!"); }
void cat(void){ puts("miao~ !!"); }
void monkey(void){ puts("ji ji !!"); }

enum animal select(void)
{
	int tmp;
	do {
		printf("0..dog  1..cat 2..monkey 3..end :");
		scanf("%d", &tmp);
	} while (tmp<Dog || tmp>Invalid);
	return tmp;
}

int main(void){
	enum animal selected;

	do {
		switch (selected = select()){
			case Dog: dog();break;
			case Cat: cat();break;
			case Monkey: monkey();break;
		}
	} while (selected != Invalid);
	
	return 0;
}
