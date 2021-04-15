#include <unistd.h>
#include <string.h>
#include <stdio.h>

void mx_printchar(char);

void mx_alphabet()
{
    for (int i = 0; i <26; i++)
    {
        mx_printchar(i % 2== 0 ? i +65 :i +97);
    }
    mx_printchar('\n')
}
