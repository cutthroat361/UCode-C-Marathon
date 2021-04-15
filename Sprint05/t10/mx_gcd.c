#include <stdio.h>

int mx_gcd(int a, int b){
  //  return ((a==0) ? b : ((b==0) ? a :((a==b)? a :((a>b)? mx_gcd(a-b,b): mx_gcd(a,b-a)))));
    return (b==0)? ((a<0)? a*-1:a): ((mx_gcd(b,a%b)<0) ?(mx_gcd(b,a%b) *-1 ) : mx_gcd(b,a%b));
}
/*
int main(){
    printf("%d", mx_gcd(-15,0));
}
*/
