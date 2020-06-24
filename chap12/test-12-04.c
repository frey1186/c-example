/*
 *  将5名学生按照 输入 排序
 *   // todo
 */

#include <stdio.h>
#include <string.h>
#define NUMBER 5
#define NAME_LEN 64

typedef struct {
	char name[NAME_LEN];
	int height;
	long weight;
	long schols;
} Student;

void swap_Student(Student *x, Student *y){
	Student tmp = *x;
	*x = *y;
	*y = tmp;
}

void sort_by_height(Student a[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>1;j--){
			if(a[j-1].height>a[j].height){
				swap_Student(&a[j-1],&a[j]);
			}	
		}
	}	
}

int main(void){
	int i;
	Student std[] = {
		{"aaa", 180, 74.2,18312},	
		{"bbb", 182, 82.5,14352},	
		{"ccc", 184, 72.4,12321},	
		{"ddd", 172, 61.5,15341},	
		{"eee", 169, 62.6,5522}
	};
	
	for(i=0;i<NUMBER;i++){
		printf("%s	%d	%ld	%ld\n",
				std[i].name,
				std[i].height,
				std[i].weight,
				std[i].schols
				);
	}
	
	sort_by_height(std,NUMBER);
	
	puts("sorted by height:");
	for(i=0;i<NUMBER;i++){
		printf("%s	%d	%ld	%ld\n",
				std[i].name,
				std[i].height,
				std[i].weight,
				std[i].schols
				);
	}

	return 0;
}	
