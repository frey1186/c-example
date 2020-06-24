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

	printf("fp --> %p \n", fp);

	if(fp==NULL){
		printf("file NOT existed. \n");
	}
	else{
		printf("file existed. \n");
		fclose(fp);
	}
	return 0;
}
