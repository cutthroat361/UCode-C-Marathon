#include <stdio.h>
#include <stdbool.h>

bool mx_is_prime(int num)
{
    int flag,i =0;
    for (i = 2; i <= num / 2; ++i) {
    // condition for non-prime
    if (num % i == 0) {
      flag = 1;
      break;
    }
    }
    return ((num==1) ? 0: (flag==0) ? 1 :0);
}
/*
int main(){
    printf("%d", mx_is_prime(89));
}*/
