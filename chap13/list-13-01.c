/*
 *  open and close a file.
 */

#include <stdio.h>

int main(void){
	FILE *fp;

	fp = fopen("abc","r");

	if(fp==NULL)
		printf("open a file fail. \n");
	else
		fclose(fp);

	return 0;
}
