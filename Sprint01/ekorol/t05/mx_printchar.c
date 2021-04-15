#include <unistd.h>
#include <string.h>
#include <stdio.h>

void mx_printchar(char i)
{
    char x[2];
    x[0]=i;
    x[1]='\0';
    write(1, x, 1);
}

int mx_strlen(const char *s)
{
   int counter = 0;
   while(s[counter] !='\0')
        counter++;
    return counter;
}
