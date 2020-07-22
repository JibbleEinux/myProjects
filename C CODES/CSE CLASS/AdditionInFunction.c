#include <stdio.h>
int A;
int B;
int Add()
{
    return A + B;
}

void main()
{
    int answer;
    A = 5;
    B = 7;
    answer = Add();
    printf("%d\n", answer);
}