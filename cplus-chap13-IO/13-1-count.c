#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	int ch;
	FILE* fp;
	unsigned long count = 0;

	if(argc != 2){
		fprintf(stdout, "Usage: %s filename \n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if((fp=fopen(argv[1], "r"))==NULL){
		fprintf(stderr, "Can not open file : %s \n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while((ch = getc(fp))!= EOF){
		putc(ch, stdout);
		count++;
	}
	if(fclose(fp) != 0){
		fprintf(stderr, "Error closing file: %s \n", argv[1]);
	}
	printf("file %s has %lu characters.\n", argv[1], count);
	
	return 0;
}
