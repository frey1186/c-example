//
// 计算2个点的距离
//
//

#include <stdio.h>
#include <math.h>

double dist(double x1, double x2, double y1, double y2){
	
	return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}



int main(void){

	double x1,y1;
	double x2,y2;

	printf("点A的坐标x=");scanf("%lf", &x1);	
	printf("     坐标y=");scanf("%lf", &y1);	
	printf("点B的坐标x=");scanf("%lf", &x2);	
	printf("     坐标y=");scanf("%lf", &y2);	

	printf("两点之间的距离是%.2f\n", dist(x1,x2,y1,y2));

	return 0;
}
