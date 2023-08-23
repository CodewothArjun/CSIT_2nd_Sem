#include <iostream>
using namespace std;
// making a class
class addition
{
private:
    int num1, num2, sum;

public:
    void input()
    {
        cout << "Enter a two numbers: ";
        cin >> num1 >> num2;
    }

    void processing()
    {
        sum = num1 + num2;
    }

    void display()
    {
        cout << "Sum of two number is " << sum;
    }
};

int main()
{
    addition add;
    add.input();
    add.processing();
    add.display();
    return 0;
}
