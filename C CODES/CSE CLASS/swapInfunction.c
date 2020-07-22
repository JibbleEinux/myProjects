#include <stdio.h>

int swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    swap(&n1, &n2);
    printf("%d %d\n", n1, n2);
    return 0;
}