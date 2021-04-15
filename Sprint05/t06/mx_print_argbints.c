#include <stdbool.h>

int mx_atoi(const char *str);

bool mx_isspace(char c);

bool mx_isdigit(int c);

void mx_printint(int n);

void mx_printchar(char c);

int main(int argc, char *argv[])
{ 
    for(int j = 1; j < argc; j++)
    {
        int n = mx_atoi(argv[j]);
  
        for (int i = 31; i >= 0; i--) 
        { 
            int k = n >> i; 
            if (k & 1) 
                mx_printint(1); 
            else
                mx_printint(0); 
        } 
        mx_printchar('\n');
    }
    return 0;
}
