#include <stdio.h>
int main()
{
    char character;
    scanf("%c", &character);
    if (character >= 'A' && character <= 'Z')
    {
        printf("%c is Uppercase\n", character);
    }
    else if (character >= 'a' && character <= 'z')
    {
        printf("%c is not Uppercase\n", character);
    }
    return 0;
}