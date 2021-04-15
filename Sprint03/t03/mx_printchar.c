#include <unistd.h>
#include <string.h>

void mx_printchar(char c)
{
    char x[2];
    x[0]=c;
    x[1]='\0';
    write(1, x, 1);
}
/*int main()
{
    mx_printchar('d');
}*/
