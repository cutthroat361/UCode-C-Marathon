#include <stdio.h>

int mx_tolower(int c)
{
   if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return c;
   return (c >= 'A' && c <= 'Z') ? c - 'A' : c;
}
/*
int main(){
    printf("%d", mx_tolower('X'));
}*/
