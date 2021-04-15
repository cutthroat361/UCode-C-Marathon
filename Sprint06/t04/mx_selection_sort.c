#include <stdio.h>
////#include "mx_strlen.c"
////#include "mx_strcmp.c"

int mx_strlen(const char*);
int mx_strcmp(const char*, const char*);

int mx_selection_sort(char **arr, int size)
{
    int ind = 0;
    int count = 0;
    for (int i = 0; i < size - 1; i++) 
    { 
        ind = i; 
        for (int j = i + 1; j < size; j++) 
            if (mx_strlen(arr[j]) < mx_strlen(arr[ind]) || (mx_strlen(arr[j]) == mx_strlen(arr[ind]) && mx_strcmp(arr[j], arr[ind]) < 0))
            {
                ind = j;
            }

        if (ind != i)
        {
            char *temp = arr[ind];
            arr[ind] = arr[i];
            arr[i] = temp;
            count++;
        }
    } 
    return count;
}
/*
int main()
{
    char *arr[] = {"Abcd", "a", "aBc", "abc", "Z", "z", "AbCd"};
    printf("%d\n", mx_selection_sort(arr, 7));

}*/

