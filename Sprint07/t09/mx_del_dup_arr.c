#include <stdio.h>
#include <stdlib.h>

int *mx_del_dup_arr(int *src, int src_size, int *dst_size)
{
    int *temp = malloc(src_size * sizeof(int));
    int count = 0;
    for (int i = 0; i < src_size; i++)
    {
        int found = 0;
        for (int j = 0; j < count; j++)
        {
            if (temp[j] == src[i])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            temp[count] = src[i];
            count++;
        }
    }
    *dst_size = count;
    return temp;
}

/*
int main()
{
    int arr[] = {1, 2, 2, 8, 4, 6, 8, 9, -4, 3, 4};
    int dst_size = 0;
    int *arr1 = mx_del_dup_arr(arr, 11, &dst_size);
    printf("%d\n", dst_size);
    for (int i = 0; i < dst_size; i++)//to see thats inside :)
    {
        printf("%d, ", arr1[i]);//with \n 
    }
}*/

