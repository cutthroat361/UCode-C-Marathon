#include <stdio.h>
#include <stdbool.h>

char *mx_strnew(const int);
bool mx_isspace(int);
int mx_strlen(const char*);
void mx_strdel(char**);
char *mx_strtrim(const char*);
char *mx_del_extra_whitespaces(const char *str)
{
    char *temp = mx_strtrim(str);
    int count = 0;
    for (int i = 1; i < mx_strlen(temp); i++)
    {
        if (mx_isspace(temp[i]) && mx_isspace(temp[i - 1]))
            count++;
    }
    char *result = mx_strnew(mx_strlen(temp) - count);
    count = 1;
    result[0] = temp[0];
    for (int i = 1; i < mx_strlen(temp); i++)
    {
        if (!mx_isspace(temp[i]) || !mx_isspace(temp[i - 1]))
        {
            result[count] = temp[i];
            count++;
        }
    }
    return result;
}

/*
int main()
{
    char *name = "\f  My name      ...      is  Neo    \t \n";
    printf("%s", name);
    name = mx_del_extra_whitespaces(name);
    printf("%s", name);
}
*/
