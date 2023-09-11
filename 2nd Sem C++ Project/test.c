#include <stdio.h>

int extendedGCD(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }

    int x1, y1;
    int gcd = extendedGCD(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - (a / b) * y1;

    return gcd;
}

int main()
{
    int num1, num2;
    int x, y;

    printf("\n\nLAB 8\n\n");

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = extendedGCD(num1, num2, &x, &y);

    printf("GCD(%d, %d) = %d\n", num1, num2, gcd);
    printf("Linear Combination: %d * %d + %d * %d = %d\n", num1, x, num2, y, gcd);
    printf("\nAayusha Khatiwada\n\n\n");

    return 0;
}

// printf("\n\nLAB 3\n\n");
// printf("\nAayusha Khatiwada\n\n\n");
