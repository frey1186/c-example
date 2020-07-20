/*
 *  将pi 写入 文本，再读取
 */

#include <stdio.h>

int main(void){
	
	FILE *fp;
	double pi = 3.14159265;

	/* write a file */
	if ( (fp=fopen("pi.txt", "w")) == NULL ){
		printf("file open failed.");
	}else{
		//fprintf(fp, "%f", pi);
		fwrite(&pi, sizeof(double), 1, fp);
		fclose(fp);
	}

	/* read the file */
	if ( (fp=fopen("pi.txt", "r")) == NULL ){
		printf("file open failed.");
	}else{
		//fscanf(fp, "%lf", &pi);
		fread(&pi, sizeof(double), 1, fp);
		printf("pi = %1.10f \n", pi);
		fclose(fp);
	}


	return 0 ;
	
}
