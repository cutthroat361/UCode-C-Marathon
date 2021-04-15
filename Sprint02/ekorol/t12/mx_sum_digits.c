#include <stdio.h>

int mx_sum_digits(int num)
{
  // return num == 0 ? 0 : num % 10 + mx_sum_digits(num / 10);
   return (num == 0) ? 0 : ((num>0) ? (num % 10 + mx_sum_digits(num / 10)) : (-num % 10 + mx_sum_digits(num / 10)));
}

/*
int main(){
    printf("%d", mx_sum_digits(435));
}*/
