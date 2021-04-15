#include <stdio.h>

double mx_pow(double n, unsigned int pow)
{
    return (pow == 0) ? 1 : ((pow%2 == 0) ? (mx_pow(n, pow/2)*mx_pow(n, pow/2)) : (n*mx_pow(n, pow/2)*mx_pow(n, pow/2)));
    /*
   if (pow == 0)
        return 1;
    else if (pow%2 == 0)
        return mx_pow(n, pow/2)*mx_pow(n, pow/2);
    else
        return n*mx_pow(n, pow/2)*mx_pow(n, pow/2);*/
}
/*
int main(){
    printf("%f", mx_pow(2.5,3));
}*/
