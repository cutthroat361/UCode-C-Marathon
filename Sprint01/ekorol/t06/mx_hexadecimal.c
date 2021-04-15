#include <unistd.h>
#include <string.h>
#include <stdio.h>

void mx_printchar(char);

void mx_hexadecimal()
{
    for (int i=0; i<16; i++)
    {
        printf("%X",i);
    }
    printf("\n");
}
