#include <stdio.h>
//#include "mx_strcmp.c"
int mx_strcmp(const char*, const char*);
int mx_binary_search(char **array, int size, const char *s, int *count)
{
    int first = 0;
    int last = size - 1;
    int middle = (first + last) / 2;

    while (first <= last) 
    {
        *count = *count + 1;
        if (mx_strcmp(array[middle], s) < 0)
            first = middle + 1;
        else if (mx_strcmp(array[middle], s) == 0)
            return middle;
        else
            last = middle - 1;
        middle = (first + last)/2;
    }
    *count = 0;
    return -1;
}

/*
int main()
{
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    int count= 0;
    printf("%d\n", mx_binary_search(arr, 6, "ab", &count));
}*/
