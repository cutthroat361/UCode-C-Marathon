#include <stdio.h>

char *mx_strjoin(const char*, const char*);

char *mx_concat_words(char **words)
{
    char *result = NULL;
    while(*words != NULL)
    {
        result = mx_strjoin(result, *words);
        if (result != NULL)
            result = mx_strjoin(result, " ");
        words++;
    }
    return result;
}

/*
int main()
{
    char *words[] = {"Free", "the", "mind", NULL};
    char *text = mx_concat_words(words);
    printf("%s\n", text);
}*/

