#include <unistd.h>
#include <string.h>
#include <stdio.h>

void mx_printchar(char);
int mx_strlen(const char *s);

void mx_only_printable()
{
    for (int i = 32; i < 127; i++)
    {
        mx_printchar(i);
    }
    mx_printchar('\n');
}

int main()
{
    mx_only_printable();
}
