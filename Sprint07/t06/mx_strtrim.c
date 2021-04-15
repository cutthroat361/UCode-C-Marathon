#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void mx_strdel(char**);
char *mx_strnew(const int);
bool mx_isspace(int);
int mx_strlen(const char*);
char *mx_strtrim(const char *str)
{
    int count = 0;
    while (mx_isspace(str[count])) count++;
    char *temp = mx_strnew(mx_strlen(str) - count);
    for (int i = 0; i < mx_strlen(str) - count; i++)
    {
        temp[i] = str[count + i];
    }

    count = mx_strlen(temp) - 1;
    while (mx_isspace(temp[count])) count--;
    char *result = mx_strnew(count + 1);
    for (int i = 0; i < count + 1; i++)
    {
        result[i] = temp[i];
    }

    mx_strdel(&temp);
    return result;
}

/*
int main()
{
    char *name = "\f  My name... is Neo    \t \n";
    printf("%s", name);
    name = mx_strtrim(name);
    printf("%s", name);
}
*/
