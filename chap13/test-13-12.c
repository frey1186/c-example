/*
 *  read 10 double type numbers .
 */

#include <stdio.h>


typedef struct {
	char name[100];
	double height;
	double weight;
} Student;

int main(void){

	FILE *fp;	
	Student std = {"Frey", 170.1, 62.5};
	Student std2;

	if( (fp=fopen("1312.dat","w"))==NULL){
		printf("open a file failed.");
	}
	else{
		fwrite(&std,sizeof(Student),1,fp);
		fclose(fp);
	}

	
	/* read the file 1312.dat */
	if( (fp=fopen("1312.dat","r"))==NULL){
		printf("open a file failed.");
	}
	else{
		fread(&std2,sizeof(Student),1,fp);
		fclose(fp);
	}

	printf("std : %s  %5.1f  %5.1f\n", std.name, std.height, std.weight);
	printf("std2: %s  %5.1f  %5.1f\n", std2.name, std2.height, std2.weight);

	return 0;
}
