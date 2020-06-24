/*
 *  calc distance of 2 points
 */

#include <stdio.h>
#include <math.h>

#define sqr(n) ((n)*(n))

typedef struct {
	double x;
	double y;
} Point;

double distance_of(Point pa, Point pb){
	return sqrt(sqr(pa.x-pb.x)+sqr(pa.y-pb.y));
}

int main(void){
	Point crnt, dest;

	printf("当前坐标:"); scanf("%lf,%lf", &crnt.x, &crnt.y); 
	printf("目标坐标:"); scanf("%lf,%lf", &crnt.x, &crnt.y); 

	printf("距离是 %.2f \n", distance_of(crnt, dest));

	printf("10 12 的差平方是 %lf \n", sqr(10.0-12.0));

	return 0;
}
