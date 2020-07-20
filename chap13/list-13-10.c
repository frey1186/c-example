/*
 *  print bin file
 */

#include <stdio.h>
#include <ctype.h>

int main(void){
	int 	n;
	unsigned long count = 0;
	unsigned char buf[16];
	FILE *fp;
	char fname[64];

	printf("File Name: "); scanf("%s", fname);

	if((fp=fopen(fname, "r"))==NULL) {
		printf("open file failed.");
	}else{
		while( (n=fread(buf, 1, 16, fp)) > 0 ){
			int i;
			printf("%08lX ", count);
			for(i=0;i<n;i++) printf("%02X ", buf[i]);
			if(n<16) for(i=n;i<16;i++) printf("   ");
			for(i=0;i<n;i++) putchar(isprint(buf[i])?buf[i]:'.');
			putchar('\n');
			count += 16;
		}
		fclose(fp);
	}
	
	return 0;
}
