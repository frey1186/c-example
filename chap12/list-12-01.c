/*
    冒泡法
*/

#include <stdio.h>
#include <string.h>

#define NUMBER 5

/*
void swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

void sort(int data[], int n){
    int k = n - 1;
    while (k>=0)
    {
        int i,j;
        for(i = 1, j = -1; i<= k; i++){
           print("test"); 
        }
    }
    

}

*/

int main(int c, const char *v[]){
	int i;

	for(i=0;i<c;i++){
		printf("%d --> %s \n", i, v[i]);
	}


	struct student {
		char	name[64];
		int	height;
		float	weight;
		long	schols;
	};  // 要加分号

	struct student x;

	char s[]="Frey";
	strcpy(x.name,s);   //字符串不能直接赋值，使用strcpy
	x.height = 170;
	x.weight = 62.5;
	x.schols = 17449;




	return 0;
	
}
