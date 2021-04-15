#include <stdio.h>
#include <stdbool.h>

bool mx_isspace(char c){
   if (c == ' ' || c == '\t'|| c=='\n'|| c == '\v'|| c == '\f'|| c == '\r') // || whatever other char you consider space
    {
        return 1;
    }else {
        return 0;
    }
}
/*
int main(){
   // mx_isdigit('0');
    printf("%d", mx_isspace('f'));
}*/
