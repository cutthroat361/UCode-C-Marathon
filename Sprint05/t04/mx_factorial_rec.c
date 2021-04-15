#include <stdio.h>

int mx_factorial_rec(int n){
    return ((n>=0 && n<=16)) ? (((n !=1)&&(n != 0)) ? n* mx_factorial_rec(n-1) : 1) : 0 ;
}
/*
int main(){
    printf("%d", mx_factorial_rec(19));
}*/
