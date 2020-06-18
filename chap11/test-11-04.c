/*
    str_toupper 函数
    str_tolower 函数
 */

#include <stdio.h>

char *str_toupper(const char *s){
    char *tmp = s;
    while (*tmp++) *tmp-=26;   //TODO
    return tmp;
}

char *str_tolower(const char *s){
    char *tmp = s;
    while (*tmp++) *tmp+=26;   //TODO
    return tmp;
}


int main(void){
    // TODO
}