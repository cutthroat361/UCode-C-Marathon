#include <unistd.h>

void mx_printchar(char c);
void mx_printinit(int n)
{
    int a=n;
    int i = 0;

    while (a>0)
    {
        a /= 10;
        i++;
    }

    for (int j=0;j<i;j++)
    {
        int t=1;
        
        for (int k=0; k<(i-j-1); k++)
        {
            t *= 10;
        }
        mx_printchar((n/t) % 10 +48);
    }
}
/*
int main(){
    printf("%d", mx_printinit(25));
}*/
