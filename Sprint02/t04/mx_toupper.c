#include <stdio.h>

int mx_toupper(int c){
	
	if( c>='a' && c<='z')
	return (c = c +'A' - 'a');
		else
	return c;
}
/*
int main(){
    printf("%d", mx_toupper('x'));
}*/
