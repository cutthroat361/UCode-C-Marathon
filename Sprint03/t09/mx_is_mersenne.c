#include <stdio.h>
#include <stdbool.h>
//#include "mx_pow.c"
//#include "mx_is_prime.c"
bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);
 bool mx_is_mersenne(int n)
 {
    num base = 2;
    int pow;
 
    for (pow = 1; pow <= 32; pow++) {
        if (mx_is_prime(base - 1)) {
            printf("2 ^ %d - 1\n", pow);
        }
        base *= 2;
    }
 
    return 0;
}
 }/*
int main(){
    printf("%d", mx_is_mersenne(3));
}*/
