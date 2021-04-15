#include <stdio.h>
#include <stdbool.h>
//#include "mx_pow.c"
double mx_pow(double n, unsigned int pow);
bool mx_is_narcissistic(int num)
{
    int original= num;
    int counter,rem,sum=0 ;
    while(num!=0)
    {
        counter++;
        num=num/10;
    }
    num=original;
    while(num !=0)
    {
        rem=num%10;
        sum=sum+mx_pow(rem,counter);
        num=num/10;
    }
    return (sum<0) ? 0 : ((sum==original) ? true : false);
}/*
int main(){
    printf("%d", mx_is_narcissistic(0));
}*/
