#include <stdio.h>

double mx_pow_rec(double n, unsigned int pow)
{
    return (pow == 0) ? 1 : ((pow%2 == 0) ? (mx_pow_rec(n, pow/2)*mx_pow_rec(n, pow/2)) : (n*mx_pow_rec(n, pow/2)*mx_pow_rec(n, pow/2)));

}/*
int main(){
    printf("%f", mx_pow_rec(1212,0));
}*/
