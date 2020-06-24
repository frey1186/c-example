/*
 * read hw.dat file, and calc the avg .
 */

#include <stdio.h>

int main(void){
	FILE	*fp;
	char	name[100];
	double	height, weight;

	if ((fp = fopen("t1304.out", "w"))== NULL)
		printf("Open the file failed.");
	else {
		printf("Name      :");fscanf(stdin, "%s", name);
		printf("Height(cm):");fscanf(stdin, "%lf", &height);
		printf("Weight(kg):");fscanf(stdin, "%lf", &weight);
		
		fprintf(fp, "%s %5.1f %5.1f \n", name, height, weight);
		
		fclose(fp);
	}

	return 0;
}
