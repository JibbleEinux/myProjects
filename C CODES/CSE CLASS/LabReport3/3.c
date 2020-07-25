#include <stdio.h>
int main()
{
    int i, uppercase = 0, lowercase = 0;
    char string[100];
    gets(string);
    for (i = 0;;)
    {
        if (string[i] == '\0')
        {
            break;
        }
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            uppercase++;
        }
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            lowercase++;
        }
        i++;
    }
    printf("Uppercase letters = %d\n", uppercase);
    printf("Lowercase letters = %d\n", lowercase);
    return 0;
}