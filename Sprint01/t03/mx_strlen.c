#include <unistd.h>
#include <string.h>
#include <stdio.h>

int mx_strlen(const char *s)
{
   int counter = 0;
   while(s[counter] !='\0')
        counter++;
    return counter;
}
/*int main()
{
    mx_strlen("ddddd");
}*/
