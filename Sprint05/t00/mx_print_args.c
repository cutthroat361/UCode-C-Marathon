#include <stdio.h>
void mx_printchar(char);
void mx_printint(int);
int mx_strlen(const char*);
void mx_printstr(const char*);

int main(int argc, char *argv[])
{
    mx_printint(argc);
    mx_printchar('\n');
    for(int i=1; i<argc;i++)
    {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

