//
//计算两个2维数组的乘积
//
#include <stdio.h>

int main(void){
	
	int i, j, k;
	int ma[2][3] = {{1,2,3},{4,5,6}};
	int mb[3][2] = {{1,5},{5,3},{8,1}};
	int mc[2][2] = {0};

	for(i=0;i<2;i++){
		for(k=0;k<2;k++){
			for(j=0;j<3;j++){
			mc[i][k] += ma[i][j] * mb[j][k];

			}
		}
	}

	for(i=0;i<2;i++){
		for(k=0;k<2;k++){
			printf("%3d", mc[i][k]);
		}
		putchar('\n');
	}

	return 0;	
}
