#include <unistd.h>
#include <string.h>
#include <stdio.h>
//#include "mx_strlen.c"
int mx_strlen(const char*);

void mx_printstr(const char *s)
{
   write(1, s, mx_strlen(s));
}

/*int main()
{
   mx_printstr("fgwegw");
}*/
