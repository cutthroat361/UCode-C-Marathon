#include <unistd.h>
#include <string.h>

void mx_printchar(char c)
{
    char str[2];
    str[0]=c;
    str[1]='\0';
    write(1, str, 1);
}
/*int main()
{
    mx_printchar('d');
}*/
