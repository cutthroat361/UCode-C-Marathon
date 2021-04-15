#include <stdio.h>

void mx_swap_char(char*s1, char*s2)
{
    char c = *s1;
    *s1 = *s2;
    *s2 = c;
}
/*
int main(){
    char str[]="ONE";
    mx_swap_char(&str[0], &str[1]);
    printf("%s",str);
}*/
