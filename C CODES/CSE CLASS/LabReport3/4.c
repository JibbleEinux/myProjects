#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    gets(string);
    strupr(string);
    puts(string);
    return 0;
}