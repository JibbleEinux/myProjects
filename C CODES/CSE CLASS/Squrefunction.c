#include <stdio.h>

int squre(int n)
{
    return n * n;
}

int main()
{
    int a, result = 0;
    scanf("%d", &a);
    result = squre(a);
    printf("%d\n", result);
}