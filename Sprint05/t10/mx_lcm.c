#include <stdio.h>
//#include "mx_gcd.c"
int mx_gcd(int, int);
int mx_lcm(int a,int b){
    return ((((a*b)/ mx_gcd(a,b))<0) ? (((a*b)/ mx_gcd(a,b))*-1 ):((a*b)/ mx_gcd(a,b))) ;
}
/*
int main(){
    printf("%d", mx_lcm(120,-72));
}*/
