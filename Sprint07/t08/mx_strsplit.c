#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int);
int mx_count_words(const char*, char);
char **mx_strsplit(char const *s, char c)
{
    char **result = malloc(mx_count_words(s, c));
    printf("%d\n", mx_count_words(s, c));
    int wordCount = 0;
    int startingIndex = -1;
    int endingIndex = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            if (endingIndex - startingIndex > 0)
            {
                char *temp = malloc(endingIndex - startingIndex + 1);
                for (int j = startingIndex; j < endingIndex + 1; j++)
                {
                    temp[j - startingIndex] = s[j];
                }
                result[wordCount] = temp;
                wordCount++;
                startingIndex = -1;
                endingIndex = -1;
            }
        }
        else
        {
            if (startingIndex == -1)
            {
                startingIndex = i;
            }
            endingIndex = i;
        }
    }
    return result;
}

/*
int main()
{
    char *s = "Knock, knock,    Neo.   ";
    char **arr= mx_strsplit(s, ' ');
    for (int i = 0; i < mx_count_words(s, ' '); i++)
    {
        printf("%s\n", arr[i]);
    }
}
*/
