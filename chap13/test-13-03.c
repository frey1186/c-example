/*
 * read hw.dat file, and sorted by height
 */

#include <stdio.h>
#define NAME_LEN 100
typedef struct {
	char name[NAME_LEN];
	double height;
	double weight;
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
	FILE	*fp;
	int	count = 0;
	int	i;
	//double	height = 0.0;
	//double 	weight = 0.0;
	//char	name[NAME_LEN];
	Student std[100];

	if ((fp = fopen("hw.dat", "r"))== NULL)
		printf("Open the file hw.dat failed.");
	else {
		while( fscanf(fp, "%s%lf%lf", std[count].name, &std[count].height, &std[count].weight) == 3 ){
			count++;
		}
		fclose(fp);
	}

	sort_by_height(std, count);

        puts("sorted by height:");

        for(i=0;i<count;i++){
                printf("%s      %5.1f      %5.1f\n",
                                std[i].name,
                                std[i].height,
                                std[i].weight);
        }

	return 0;
}
