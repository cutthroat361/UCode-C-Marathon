#include <stdio.h>

int mx_max(int a, int b, int c)
{
    return (a > b ? ((a > c) ? a : c) : ((b > c) ? b : c));
}
/*
int main(){
    printf("%d", mx_max(5,6,6));
}*/
