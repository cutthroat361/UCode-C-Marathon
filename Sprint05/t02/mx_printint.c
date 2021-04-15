#include <stdio.h>

void mx_printchar(int n);

int mx_pow(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
        result *= a;
    return result;
}

void mx_printint(int n)
{
    int a = n;
    int count = 0;
    while (a < 0)
    {
        mx_printchar('-');
        a *= -1;
        n *= -1;
    }
    while (a > 0)
    {
        a /= 10;
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        int temp = mx_pow(10, count - i - 1);
        mx_printchar((n / temp) % 10 + 48);
    }
}
/*
int main(){
    printf("%d", mx_printinit(25));
}*/
