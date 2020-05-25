//
// 计算2行3列矩阵之和
//

#include <stdio.h>

int mat_add(const int ma[2][3], const int mb[2][3], int mc[2][3]){

	int i, j;

	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			mc[i][j] = ma[i][j] + mb[i][j];
		}
	}
	
	return 0;
}


int main(void){

	int i , j;
	int va[2][3] = {{1,2,3},{4,5,6}};
	int vb[2][3] = {{6,3,4},{5,1,2}};
	int vc[2][3] = {0};

	mat_add(va, vb, vc);

	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%3d", vc[i][j]);
		}
		putchar('\n');
	}

	return 0 ;
}
