#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

void mx_printchar(char i)
{
    char x[2];
    x[0]=i;
    x[1]='\0';
    write(1, x, 1);
}

void mx_printinit(int n)
{
    int a=n;
    int i = 0;

    while (a>0)
    {
        a /= 10;
        i++;
    }

    for (int j=0;j<i;j++)
    {
        int t=1;
        
        for (int k=0; k<(i-j-1); k++)
        {
            t *= 10;
        }
        mx_printchar((n/t) % 10 +48);
    }
}

int mx_strlen(const char *s)
{
   int counter = 0;
   while(s[counter] !='\0')
        counter++;
    return counter;
}

void mx_printstr(const char *s)
{
   write(1, s, mx_strlen(s));
}

char *mx_strcpy(char *dst, const char *src)
{
    char *saved = dst;
    while (*src)
    {
        *dst++ = *src++;
    }
    *dst = 0;
    return saved;
}

int mx_strlen(const char *s)
{
   int counter = 0;
   while(s[counter] !='\0')
        counter++;
    return counter;
}

int mx_strcmp(const char*s1, const char*s2)
{
        while(*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

bool mx_isdigit(int c){
    if ((c>='0') && (c<='9')) return 1;
	return 0;
}

bool mx_isspace(char c){
   if (c == ' ' || c == '\t'|| c=='\n'|| c == '\v'|| c == '\f'|| c == '\r') // || whatever other char you consider space
    {
        return 1;
    }else {
        return 0;
    }
}

int mx_atoi(const char *str)
{
    int result = 0;
    for(int i=0; str[i] != '\0';++i)
    {
        result*=10;
        result += str[i] - '0';
    }
    return result;
}
typedef struct t_student
{
    char *first_name;
    char *last_name;
    int age;
}s_student;
