#include <stdio.h>

int mx_count_words(const char *str, char delimeter)
{
    int count = 0;
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == delimeter)
        {
            if (length > 0) count++;
            length = 0;
        }
        else 
        {
            length++;
        }
    }
    return count;
}
