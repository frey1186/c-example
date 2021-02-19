#include <stdio.h>
#define SIZE 10

int main(void)
{
	
	int s[SIZE];
	int i;

	for(i=0;i<SIZE;i++){
		printf("%4d %10d \n", i, s[i]);
	}

	return 0;
}
