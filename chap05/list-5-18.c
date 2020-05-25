//
// 计算1000以内的质数  4th
//

#include <stdio.h>

int main(void){
	int i, no;
	int prime[500];  // 质数的数组
	int ptr = 0;  // 质数的个数

	unsigned long counter = 0;

	prime[ptr++] = 2;
	prime[ptr++] = 3;

	for(no=5; no<=1000; no+=2){
		for(i=1; i<ptr; i++){
		
			counter++;
			if(no % prime[i] == 0) break;
		}
		if (ptr == i)  prime[ptr++] = no;
	}

	for (i = 0; i<ptr; i++) printf("%d\n", prime[i]);


	printf("运算次数：%lu\n", counter);

	return 0;

}
