#include <unistd.h>
#include <string.h>

void mx_printchar(char c)
{
    wrirte(1,&c,1);
}
