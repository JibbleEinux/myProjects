1.#include <stdio.h>

#define PI 3.14
int sumOfId(int a)
{
    int n, sum = 0, m;
    n = a;
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int id;
    float radius, area, circumference, diameter;
    printf("Enter your last 4 digits of Id: ");
    scanf("%d", &id);
    radius = sumOfId(id);

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Diameter Of a Circle = %.2f\n", diameter);
    printf("Circumference Of a Circle = %.2f\n", circumference);
    printf("Area Of a Circle = %.2f\n", area);

    return 0;
}


------------------------------------------------------
3.
#include <stdio.h>
int ODD(int ArraySize, int a[100])
{
    int Odd_Count = 0;
    for (int i = 0; i < ArraySize; i++)
    {
        if (a[i] % 2 != 0)
        {
            Odd_Count++;
        }
    }
    return Odd_Count;
}
int EVEN(int ArraySize, int a[100])
{
    int Even_Count = 0;

    for (int i = 0; i < ArraySize; i++)
    {
        if (a[i] % 2 == 0)
        {
            Even_Count++;
        }
    }
    return Even_Count;
}
int main()
{
    int ArraySize, i, a[100];
    int Even_Count = 0, Odd_Count = 0;
    printf("Enter Array Size: ");
    scanf("%d", &ArraySize);
    for (i = 0; i < ArraySize; i++)
    {
        scanf("%d", &a[i]);
    }
    Odd_Count = ODD(ArraySize, a);
    Even_Count = EVEN(ArraySize, a);
    printf("\nTotal Number of Even Numbers in this Array = %d ", Even_Count);
    printf("\nTotal Number of Odd Numbers in this Array = %d ", Odd_Count);
    return 0;
}
------------------------------------------
4.
#include <stdio.h>
int Neg(int ArraySize, int a[100])
{
    int Neg_Count = 0;
    for (int i = 0; i < ArraySize; i++)
    {
        if (a[i] < 0)
        {
            Neg_Count++;
        }
    }
    return Neg_Count;
}
int main()
{
    int ArraySize, i, a[100];
    int Neg_Count = 0;
    printf("Enter Array Size: ");
    scanf("%d", &ArraySize);
    for (i = 0; i < ArraySize; i++)
    {
        scanf("%d", &a[i]);
        Neg_Count = Neg(ArraySize, a);
    }
    printf("\nTotal Number of Negetive Numbers in this Array = %d ", Neg_Count);
    return 0;
}



