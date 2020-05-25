//
//
//

#include <stdio.h>

void put_stars(int n){
	while (n--) putchar('*');
}

void alert(int no){
	while(no--) putchar('\a');
}


int main(void){
	
	int i;
	int ln;

	printf("三角形有几层：");
	scanf("%d", &ln);

	for (i=0; i<ln; i++){
	
		put_stars(i+1);
		putchar('\n');
	}


	alert(ln);

	return 0;

}
