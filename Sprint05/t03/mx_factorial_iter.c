#include <stdio.h>

int mx_factorial_iter(int n){
    int i=1;
    int x=1;
    //return (n>=0 && n<=19) ? (((n !=1)&&(n != 0)) ? n* mx_factorial_iter(n-1) : 1) : 0 ;
    if (n>=0 && n<=16){
        if ((n !=1)&&(n != 0)){
            while (i<=n){
                x=x*i;
                i++;}
            return x;
        }
        return 1;
    }
    return 0;
}

int main(){
    printf("%d", mx_factorial_iter(16));
    printf("%d", mx_factorial_iter(10));
    printf("%d", mx_factorial_iter(1));
    printf("%d", mx_factorial_iter(0));
    printf("%d", mx_factorial_iter(3));
}
