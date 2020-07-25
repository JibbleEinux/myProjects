#include <stdio.h>
#include <string.h>
int main()
{
    int con;
    char string[100];
    gets(string);
    con = atoi(string);
    printf("%d\n", con);
    return 0;
}
