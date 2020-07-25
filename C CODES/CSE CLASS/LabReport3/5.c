#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    gets(string);
    strlwr(string);
    puts(string);
    return 0;
}