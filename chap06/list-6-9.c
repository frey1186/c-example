//
//逆向显示非负整数
//
//

#include <stdio.h>


int scan_unit(void){

	int tmp;
	
	do {
		printf("input a number: ");
		scanf("%d", &tmp);
		if(tmp<0){
			puts("pls not input a - number.");
		}
	}while(tmp<0);

	return tmp;
}

int rev_int(int num){
	int tmp = 0;

	if (num > 0){
		do {
			tmp = tmp*10 + num%10;
			num /= 10;
		}while (num > 0);
	}
	return tmp;
}

int main(void){
	int nx = scan_unit();
	printf("该整数倒转后是%d\n", rev_int(nx));
	return 0 ;
}
