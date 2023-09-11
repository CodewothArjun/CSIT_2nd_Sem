#include <iostream>
using namespace std;
class Prime
{
protected:
    int num;

public:
    // void takeData(int n)
    // {
    //     num = n;
    // }
    bool calculate(int n)
    {
        num = n;
        int i;
        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                return 0;
            }
            return 1;
        }
    }
};

int main()
{
    Prime p1;
    int i, num;
    cout << "Enter the number: ";
    cin >> num;
    for (i = 0; i < num; i++)
    {
        if (p1.calculate(num))
        {
            cout << i << " ";
        }
    }
    // p1.takeData(100);
    // p1.display();
    return 0;
}