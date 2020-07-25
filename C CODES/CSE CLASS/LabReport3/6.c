#include <stdio.h>
int main()
{
    int i = 0, characterCount = 0;
    char string[100], character;
    gets(string);
    character = getchar();
    while (string[i] != '\0')
    {
        if (string[i] == character)
        {
            characterCount++;
        }
        i++;
    }
    printf("%c occurrence of character in string %d times\n", character, characterCount);
    return 0;
}