// 1.	Write a program to calculate weight for the given mass. Make acceleration due to gravity g=9.8  as default argument.
#include <iostream>
using namespace std;
class Weight
{
private:
    float mass, weight, g;

public:
    void takeInput(float m, float G = 9.8)
    {
        mass = m;
        g = G;
    }
    void calculate()
    {
        weight = mass * g;
    }
    void display()
    {
        cout << "Weight of the given mass is " << weight << ".";
    }
};

int main()
{
    cout << "\n\n2. Write a program to calculate weight for the given mass. Make acceleration due to gravity g=9.8  as default argument. - 'Arjun Mijar'\n\n";
    Weight w1;
    w1.takeInput(100);
    w1.calculate();
    w1.display();
    cout << "\n\n";
    return 0;
}