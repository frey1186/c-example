#include <stdio.h>

int main(void){

	int a, b, c;

	printf("begin(cm):");scanf("%d", &a);
	printf("end(cm):");scanf("%d", &b);
	printf("interval(cm):");scanf("%d", &c);

	int i;
	for(i=a;i<b;i+=c) printf("%dcm	%.2fkg\n", i, (i-100)*0.9);
	return 0;
}
