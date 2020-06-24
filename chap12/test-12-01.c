/*
    结构体的初始化
*/

#include <stdio.h>

#define NAME_LEN 64

int main(int c, const char *v[]){

	struct student {
		char	name[NAME_LEN];
		int	height;
		float	weight;
		long	schols;
	};  // 要加分号

	struct student x = {"FreyYanghelloworld...", 170, 62.5};

	printf("x.name = %s, address is %p  \n", x.name, x.name);
	printf("x.height = %d, address is %p  \n", x.height, &x.height);
	printf("x.weight = %.1f, address is %p  \n", x.weight, &x.weight);
	printf("x.schols = %ld, address is %p  \n", x.schols, &x.schols);

	printf("sizeof int 	%ld  \n", sizeof(int));
	printf("sizeof float 	%ld  \n", sizeof(float));
	printf("sizeof long 	%ld  \n", sizeof(long));
	return 0;
	
}
