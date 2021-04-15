#include <stdio.h>

void leftRotatebyOne(int arr[], int size);

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d", arr[i]);
}

void leftRotatebyOne(int arr[], int size)
{
	int temp = arr[0], i;
	for (i = 0; i < size - 1; i++)
		arr[i] = arr[i + 1];
	arr[size-1] = temp;
}

void mx_arr_rotate(int*arr, int size, int shift){
    	int i;
	for (i = 0; i < shift; i++)
		leftRotatebyOne(arr, size);
	printArray(arr, size);
}
/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5};
    mx_arr_rotate(arr,5,2);
}*/
