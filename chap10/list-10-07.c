/*
 * 整数排序
 */

#include <stdio.h>

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void sort2(int *x, int *y){
    if (*x > *y) swap(x, y);
}

int main(void){
    int na,nb;

    puts("input two numbers: ");
    printf("Number A : "); scanf("%d", &na);
    printf("Number B : "); scanf("%d", &nb);

    sort2(&na, &nb);

    printf("Numbers sort: %d, %d \n", na, nb);

    return 0;
}