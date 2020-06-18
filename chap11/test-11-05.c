/*
删除字符串中的数字，如ABC123abc -->  ABCabc
 */

#include <stdio.h>

void del_digital(char *s){

    char *t=s;
    while (*t)
    {
        if(*t>='0' && *t<='9') {
            t++;
            continue;
        }else{
            *s++ = *t++;
        }
    }
    *s=*t;
}

int main(int argc, const char *argv[]){

    char s[]="ABC124abc123";
    printf("s：%s\n", s);

    // char *s="ABC124abc123";   // 这么写就不行
    // char t[] = s;
    // printf("s address : %p, t address: %p \n", s, t);

    del_digital(s);
    printf("去掉数字：%s\n", s);
    printf("字面量 address：%p\n", "abc");
    printf("\"456\"+1 = %s\n", "456"+1);

    char* t = "abc"+ 1;
    printf("t= %s\n", t);

    return 0;
}