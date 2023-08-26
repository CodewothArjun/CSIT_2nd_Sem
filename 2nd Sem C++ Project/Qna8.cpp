// 8.	Write a program to add two complex numbers by overloading binary operator ( + ).
#include <iostream>
using namespace std;
class ComOvLd
{
    float real, image;

public:
    ComOvLd(){};
    ComOvLd(float rel, float img)
    {
        real = rel;
        image = img;
    }

    ComOvLd
    operator+(ComOvLd C)
    {
        ComOvLd add;
        add.real = real + C.real;
        add.image = image + C.image;
        return add;
    }
    void display()
    {
        cout << real << " + " << image << "i";
    }
};

int main()
{
    ComOvLd c1, c2, c3;
    c1 = ComOvLd(2.3, 4.5);
    c2 = ComOvLd(2.3, 4.5);
    c3 = c1 + c2;
    c1.display();
    cout << endl;
    c2.display();
    cout << endl;
    c3.display();
    cout << endl;

    return 0;
}