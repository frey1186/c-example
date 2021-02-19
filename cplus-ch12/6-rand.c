#include <stdio.h>
#include <stdlib.h>

int main(void){
	int roll;
	roll = rand()%6+1;
	printf("%d\n", roll);
	return 0 ;
}
