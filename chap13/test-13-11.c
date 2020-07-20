/*
 *  read 10 double type numbers .
 */

#include <stdio.h>

int main(void){

	FILE *fp;	
	double s[10] = {1.2,2.1,3.6,4.2,5.77,6.21,7.233,8.6432,9.123,10.001};
	double t[10];

	if( (fp=fopen("1311.dat","w"))==NULL){
		printf("open a file failed.");
	}
	else{
		fwrite(s,sizeof(double),10,fp);
		fclose(fp);
	}

	
	/* read the file 1311.dat */
	if( (fp=fopen("1311.dat","r"))==NULL){
		printf("open a file failed.");
	}
	else{
		fread(t,sizeof(double),10,fp);
		fclose(fp);
	}

	printf("Print s[10]: ");
	for(int i=0;i<10;i++) printf("%f ", s[i]);
	printf("\n");

	printf("Print t[10]: ");
	for(int i=0;i<10;i++) printf("%f ", t[i]);
	printf("\n");
	return 0;
}
