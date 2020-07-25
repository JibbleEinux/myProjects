#include <stdio.h>
int main()
{
    char character;
    scanf("%c", &character);
    if (character >= 'a' && character <= 'z')
    {
        printf("%c is lowercase\n", character);
    }
    else if (character >= 'A' && character <= 'Z')
    {
        printf("%c is not lowercase\n", character);
    }
    return 0;
}