#include <string.h>

void mx_printchar(char i);
void mx_isos_triangle(unsigned int length,char i)
{
    for (unsigned int i = 0; i <length; i++)
    {
        for (unsigned int j = 0; j <i; j++)
            mx_printchar(i);
    }
    mx_printchar('\n');
}
