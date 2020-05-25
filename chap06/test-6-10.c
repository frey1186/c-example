//
// 计算2个矩阵的乘积
//

#include <stdio.h>

int mat_mul(const int ma[2][3], const int mb[3][2], int mc[2][2]){

	int i, j, k;

	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				mc[i][k] += ma[i][j] * mb[j][k];	
			}
		}
	}
	
	return 0;
}


int main(void){

	int i , j;
	int va[2][3] = {{1,2,3},{4,5,6}};
	int vb[3][2] = {{6,3},{5,1},{3,2}};
	int vc[2][2] = {0};

	mat_mul(va, vb, vc);

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%3d", vc[i][j]);
		}
		putchar('\n');
	}

	return 0 ;
}
