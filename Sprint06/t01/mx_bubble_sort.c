#include <stdio.h>
//#include "mx_strcmp.c"
int mx_strcmp(const char*, const char*);
int mx_bubble_sort(char **arr, int size){
    int i, j; 
    int count = 0;
    for (i = 0; i < size-1; i++){ 

	    // Last i elements are already in place 
	    for (j = 0; j < size-i-1; j++){
		    if (mx_strcmp(arr[j], arr[j + 1]) > 0) {
			     char *swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
                count++;
            }
        }
     }
    return count;
}
/*
int main()
{
    char *arr[] = { "abc", "xyz", "ghi", "def" };
    printf("%d\n", mx_bubble_sort(arr, 4));
    char *arr1[] = {"abc", "acb", "a"};
    printf("%d\n", mx_bubble_sort(arr1, 3));
}*/
