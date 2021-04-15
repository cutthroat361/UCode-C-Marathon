#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mx_strdup(const char*str){
{
    char *s2;
  size_t size = strlen(str) + 1;

  s2 = malloc(size);
  if (s2) {
    memcpy(s2, str, size);
  }
  return str;
}
}

int main(){
    char *str = "sup, dude";
    char *copy = mx_strdup(str);
    printf("s\n", copy);
}
