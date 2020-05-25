#include <stdio.h>


int func(int n ){

	int s=1 ;
	do{
		s *= n--;	
	}while(n>0);

	return s;
}

int main(void){

	int n=5;
	printf("%d的阶乘是%d\n", n, func(n));
	return 0;

}
