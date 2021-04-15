#include <stdio.h>
//#include "mx_strlen.c"
int mx_strlen(const char*);
int mx_insertion_sort(char **array, int size) 
{
    int count = 0;
    
    for (int i = 1; i < size; i++) 
    {
        char *key = array[i];
        int j = i - 1;
        for (; j >= 0 && mx_strlen(key) < mx_strlen(array[j]); j--)
        {
            array[j + 1] = array[j];
            count++;
        }
        array[j + 1] = key;
    }
    return count;
}

/*
int main()
{
    char *arr[] = {"abc", "ab", "aaaaa", "aaaa", "aaa"};
    printf("%d\n", mx_insertion_sort(arr, 5));
}*/
