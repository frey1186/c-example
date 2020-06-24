/*
 *  open and close a file.
 */

#include <stdio.h>

int main(void){
	FILE *fp;
	char filename[100];

	printf("Input the file name :");
	scanf("%s", filename);

	fp = fopen(filename,"r");

	if(fp==NULL)
		printf("open a file fail. \n");
	else
		fclose(fp);

	return 0;
}
