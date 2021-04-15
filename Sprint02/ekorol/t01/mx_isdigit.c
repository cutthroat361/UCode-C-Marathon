#include <stdio.h>
#include <stdbool.h>

bool mx_isdigit(int c){
    if ((c>='0') && (c<='9')) return 1;
	return 0;
}
/*
int main(){
    mx_isdigit('0');
    printf("%d", mx_isdigit('A'));
}

int check_digit (char c) {
	if ((c>='0') && (c<='9')) return 1;
	return 0;
}
*/
