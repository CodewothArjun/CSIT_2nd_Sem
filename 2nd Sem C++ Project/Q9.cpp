// 9.	Write a program to overload “ ++ “ (both prefix and postfix ) operator.
#include <iostream>
using namespace std;
class Number
{
    int num1, num2;

public:
    Number(){};
    Number(int x, int y)
    {
        num1 = x;
        num2 = y;
    };
    Number operator++(int);
};

Number Number::operator++(int)
{
    int sum = num1 + num2;
    cout << sum << endl;
}

int main()
{
    Number N(3, 6);

    return 0;
}