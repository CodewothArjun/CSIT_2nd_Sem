// 6.	Write a program to add two complex numbers using the concept of constructor overloading.

#include <iostream>
using namespace std;
class complex
{
private:
    float real, img;

public:
    complex(){};
    complex(float num)
    {
        real = img = num;
    }
    complex(float rel, float im)
    {
        real = rel;
        img = im;
    }
    void sum(complex c1, complex c2)
    {
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    complex Cm1(1.5);
    complex Cm2(2.5, 4.5);
    complex C;
    cout << "First Complex No. = ";
    Cm1.display();
    cout << "Second Complex No. = ";
    Cm2.display();
    C.sum(Cm1, Cm2);
    cout << "Addition of Two Complex No. = ";
    C.display();
}
