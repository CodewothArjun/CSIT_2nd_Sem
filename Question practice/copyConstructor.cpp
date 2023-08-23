#include <iostream>
using namespace std;
class Copy
{
    int id;

public:
    Copy(){};
    Copy(int x)
    {
        int x;
    }

    Copy(Copy &y)
    {
        id = y.id;
    }

    void display()
    {
        cout << "\nId: " << id;
    }
};

int main()
{
    Copy A(20);
    Copy B(A);
    Copy C = A;
    Copy D;
    D = A;
    cout << "\nId of A: ";
    A.display();
    cout << "\nId of B: ";
    B.display();
    cout << "\nId of C: ";
    C.display();
    cout << "\nId of D: ";
    D.display();
    return 0;
}