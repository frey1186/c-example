#include <stdio.h>
#include <stdlib.h>
#define LEN 100

int main(void){

	char  *str;

	str = (char*)malloc(LEN*sizeof(char));
	if(str == NULL){
		fprintf(stderr, "malloc failed.");
		exit(EXIT_FAILURE);
	}
	str[0] = 'H';
	str[1] = '\0';
	str[2] = 'e';

	//printf("s[0]:%p \n", &s[0]);
	//printf("s   :%p \n", s);
	//printf("s+1 :%p \n", s+1);
	//printf("s[1]:%p \n", &s[1]);

	printf("%s\n", str);

	free(str);
	return 0;
}
