/*
    冒泡法
*/

#include <stdio.h>
#include <string.h>


int main(int c, const char *v[]){

/*	int i;

	for(i=0;i<c;i++){
		printf("%d --> %s \n", i, v[i]);
	}
*/


	struct student {
		char	name[64];
		int	height;
		float	weight;
		long	schols;
	};  // 要加分号

	struct student x;
	printf("x.name = %s, x.name address is %p  \n", x.name, x.name);

	strcpy(x.name,"frey");   //字符串不能直接赋值，使用strcpy
	x.height = 170;
	x.weight = 62.5;
	x.schols = 17449;

	printf("x.name = %s, x.name address is %p  \n", x.name, x.name);


	return 0;
	
}
