/*
    结构体的初始化
*/

#include <stdio.h>

#define NAME_LEN 64

typedef struct student {
	char	name[NAME_LEN];
	int	height;
	float	weight;
	long	schols;
} Student;  // 要加分号

void change(Student *std){
	
	if(std->height<180) std->height=180;
	if(std->weight>80) std->weight=80;
	//if((*std).height<180) (*std).height=180;
	//if((*std).weight>80) (*std).weight=80;
}


int main(int c, const char *v[]){


	Student x = {"FreyYang", 170, 62.5};
	Student y = x;

	change(&x);

	printf("x.name = %s, address is %p  \n", x.name, x.name);
	printf("x.height = %d, address is %p  \n", x.height, &x.height);
	printf("x.weight = %.1f, address is %p  \n", x.weight, &x.weight);
	printf("x.schols = %ld, address is %p  \n", x.schols, &x.schols);

	printf("y.name = %s, address is %p  \n", y.name, y.name);
	printf("y.height = %d, address is %p  \n", y.height, &y.height);
	printf("y.weight = %.1f, address is %p  \n", y.weight, &y.weight);
	printf("y.schols = %ld, address is %p  \n", y.schols, &y.schols);

	printf("size of Student = %ld \n", sizeof(Student));

	return 0;
	
}
