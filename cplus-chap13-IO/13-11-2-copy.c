#include <stdio.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

int main(int argc, char *argv[]){
	
	FILE *src, *dist;
	char buf[BUFF_SIZE];
	int n;

	if(argc < 3){
		printf("Usage: %s src dist \n", argv[0]);
		exit(1);
	}

	if((src = fopen(argv[1], "rb"))== NULL){
		printf("open %s failed.\n", argv[1]);
		fclose(src);
		exit(1);
	}
	if((dist = fopen(argv[2], "wb"))== NULL){
		printf("open %s failed.\n", argv[2]);
		fclose(src);
		fclose(dist);
		exit(1);
	}

	while((n = fread(buf, 1, BUFF_SIZE, src)) > 0){
		fwrite(buf,1,n,dist);
	}
	
	fclose(src);
	fclose(dist);

	return 0;
}
