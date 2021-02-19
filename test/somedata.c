#include <stdio.h>
#define SIZE 4

int main(void)
{
	
	int s[SIZE]={20,[3]=100};
	int i;

	for(i=0;i<SIZE;i++){
		printf("%4d %10d \n", i, s[i]);
	}

	return 0;
}
