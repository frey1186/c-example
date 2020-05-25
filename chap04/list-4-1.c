#include <stdio.h>

int main(void){

	int c;
	do {
	
		int no;
		printf("input a number: "); scanf("%d", &no);
		if (no%2)
			printf("奇数\n");
		else
			printf("ou数\n");

		printf("要重复一次吗？【0-yes，9-no】"); scanf("%d", &c);
	
	} while (c == 0);

	return 0;
}
