/*
    结构体的初始化
*/

#include <stdio.h>

#define NAME_LEN 64

struct student {
	char	name[NAME_LEN];
	int	height;
	float	weight;
	long	schols;
};  // 要加分号

void change(struct student *std){
	
	if(std->height<180) std->height=180;
	if(std->weight>80) std->weight=80;
	//if((*std).height<180) (*std).height=180;
	//if((*std).weight>80) (*std).weight=80;
}


int main(int c, const char *v[]){


	struct student x = {"FreyYang", 170, 62.5};


	change(&x);



	printf("x.name = %s, address is %p  \n", x.name, x.name);
	printf("x.height = %d, address is %p  \n", x.height, &x.height);
	printf("x.weight = %.1f, address is %p  \n", x.weight, &x.weight);
	printf("x.schols = %ld, address is %p  \n", x.schols, &x.schols);
	printf("x address is %p  \n", &x);

	return 0;
	
}
