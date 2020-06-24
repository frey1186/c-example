/*
    结构体的初始化
*/

#include <stdio.h>
#include <string.h>

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

	char name[NAME_LEN]; printf("input name: "); scanf("%s", name);

	Student x;

	strcpy(x.name, name);


	change(&x);

	printf("x.name = %s, address is %p  \n", x.name, x.name);
	printf("x.height = %d, address is %p  \n", x.height, &x.height);
	printf("x.weight = %.1f, address is %p  \n", x.weight, &x.weight);
	printf("x.schols = %ld, address is %p  \n", x.schols, &x.schols);


	printf("size of Student = %ld \n", sizeof(Student));

	return 0;
	
}
