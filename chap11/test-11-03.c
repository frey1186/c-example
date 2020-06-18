/*
    不适用下标，用指针统计某个字符的数量
 */


#include <stdio.h>

int str_chnum(const char *str, char c){
    int num=0;
    while(*str++)  if(*str==c) num++;
    return num;
}

int main(void){
    char st[]="abcdsdddd";
    printf("string:%s, char:%c, numbers: %d\n", st, 'c', str_chnum(st, 'c'));
    return 0;
}