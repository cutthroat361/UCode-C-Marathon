#include <stdio.h>
#include <unistd.h>
//#include "mx_printchar.c"
void mx_printchar(char c);

int mx_strlen(const char *s)
{
    int count = 0;
    while (s[count] != '\0')
        count++;
    return count;
}

void mx_str_separate(const char *str, char delim) 
{
    for (int i=0; i<mx_strlen(str);i++)
    {
        mx_printchar(str[i] == delim ? '\n' : str[i]);
    }    
}
/*
int main() {
    mx_str_separate("game over",'o');
}*/
