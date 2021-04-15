#include <stdio.h>

char * strcpy(char *dst, const char *src)
{
   char *save = dst;
   while(*dst++ = *src++);
   return save;
}
