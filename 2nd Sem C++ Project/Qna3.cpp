// 3.	Write a program to find largest of two numbers using the concept of nesting of member function.

#include <iostream>
using namespace std;
class nestMemFun
{
private:
    int num1, num2;

public:
    void input(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    int calculate();
    void display();
};

int nestMemFun::calculate()
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

void nestMemFun::display()
{
    cout << "The largest number is " << calculate();
}

int main()
{
    nestMemFun nes;
    nes.input(5, 10);
    nes.calculate();
    nes.display();
}