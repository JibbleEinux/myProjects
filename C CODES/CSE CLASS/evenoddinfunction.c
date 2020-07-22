#include <stdio.h>

void evor(int a)
{
    if (a % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    evor(n);
}