#include <stdio.h>
// Declaring a functions
void BinaryAddition();
void BinaryMultiplication();
void BinaryDivision();
int main()
{
    int choice;
    printf(" For Binary Addition : 1\n For Binary Multiplication : 2\n For Biary Division : 3\n\nEnter your choice: ");
    scanf("%d", &choice);

    // simple logic
    if (choice == 1)
    {
        BinaryAddition();
    }
    else if (choice == 2)
    {
        BinaryMultiplication();
    }
    else
    {
        BinaryDivision();
    }

    return 0;
}

// Defining a function
void BinaryAddition()
{
    long binary1, binary2;
    int i = 0, remainder = 0, sum[20];

    printf("Enter the first binary number for addition: ");
    scanf("%ld", &binary1);
    printf("Enter the second binary number for addition: ");
    scanf("%ld", &binary2);
    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
    {
        sum[i++] = remainder;
    }
    --i;
    // displaying sum of two binary numbers.
    printf("Sum of two binary numbers: ");
    while (i >= 0)
    {
        printf("%d", sum[i--]);
    }
}

//
//

void BinaryMultiplication()
{
    long binary3, binary4, multiply = 0;
    int digit, factor = 1;
    int i = 0, remainder = 0, sum[20];
    int binaryprod = 0;

    printf("\nEnter the first binary number for multiplication: ");
    scanf("%ld", &binary3);
    printf("Enter the second binary number for multiplication: ");
    scanf("%ld", &binary4);

    while (binary3 != 0 || binary4 != 0)
    {
        sum[i++] = (binary3 % 10 + binary4 % 10 + remainder) % 2;
        remainder = (binary3 % 10 + binary4 % 10 + remainder) / 2;
        binary3 = binary3 / 10;
        binary4 = binary4 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        binaryprod = binaryprod * 10 + sum[i--];

    while (binary4 != 0)
    {
        digit = binary4 % 10;
        if (digit == 1)
        {
            binary3 = binary3 * factor;
        }
        else
            binary3 = binary3 * factor;
        binary4 = binary4 / 10;
        factor = 10;
    }
    printf("Product of two binary numbers: %ld\n", multiply);
}

//
//

void BinaryDivision()
{
}
