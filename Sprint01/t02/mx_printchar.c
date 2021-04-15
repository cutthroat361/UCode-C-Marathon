#include <unistd.h>
#include <string.h>

void mx_printchar(char i)
{
    char x[2];
    x[0]=i;
    x[1]='\0';
    write(1, x, 1);
}
/*int main()
{
    mx_printchar('d');
}*/
