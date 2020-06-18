#include <stdio.h>
#include <string.h>


int numberOfChar(const char s[], char c){
	int number=0;
	while(*s) {
		if (*s == c) number++;
		s++;
	}
	return number;
}


int main(void){
	char st[] = "abc123ccccc";
	printf("len of %s is %ld\n", st, strlen(st));
	printf("numbers of '%c' in '%s' : %d \n", 'c', st, numberOfChar(st, 'c'));
	return 0;
}