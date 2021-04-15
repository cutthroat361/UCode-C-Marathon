#include <stdio.h>
#include <unistd.h>
#include <string.h>

void mx_write_knock_knock()
{
    char text[]= "Wake up, NEO \\ (^_^) /\nThe Matrix has you";
    write(1, text, strlen(text));
}
