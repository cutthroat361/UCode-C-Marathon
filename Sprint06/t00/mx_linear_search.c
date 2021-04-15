#include <stdio.h>
//#include "mx_strcmp.c"
int mx_strcmp(const char*, const char*);

int mx_linear_search(char **arr, const char*s){
    int Length  =0;
    Length  = (sizeof(arr)/sizeof(char))+1;
    int size=0;
    while (mx_strcmp(s,arr[size])!=0)
    {
        size++;
        if (size>Length){
            return -1;
            break;
        }
    }
    return size;
}
/*
int main()
{
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z", NULL};
    printf("%d\n", mx_linear_search(arr,"z"));
    printf("%d\n", mx_linear_search(arr,"aBc"));
}*/
