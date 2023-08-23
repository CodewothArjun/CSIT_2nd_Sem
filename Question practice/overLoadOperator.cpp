#include <iostream>
using namespace std;
class complex
{
    float x, y;

public:
    // Declaring and defining a function
    complex(){};
    complex(float real, float image)
    {
        x = real;
        y = image;
    }

    // Declaring a function
    complex operator+(complex);
    void display();
};

// Defining a function
complex complex::operator+(complex c)
{ // 1st complex-return type, 2nd complex-class
    complex store;
    store.x = x + c.x;
    store.y = y + c.y;
    return store;
}

void complex::display()
{
    cout << x << " + " << y << "i" << endl;
}
int main()
{
    complex c1, c2, c3;
    c1 = complex(2.5, 4.5);
    c2 = complex(4.5, 7.5);
    c3 = c1 + c2;
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    cout << "c3 = ";
    c3.display();
    return 0;
}

/*
#include <iostream>
using namespace std;

class complex {
    float x, y;

public:
    // Member function to initialize the complex number
    void initialize(float real, float image) {
        x = real;
        y = image;
    }

    complex operator+(complex);
    void display();
};

complex complex::operator+(complex c) {
    complex store;
    store.x = x + c.x;
    store.y = y + c.y;
    return store;
}

void complex::display() {
    cout << x << " + " << y << "i" << endl;
}

int main() {
    complex c1, c2, c3;

    // Using the initialize function to set values
    c1.initialize(2.5, 4.5);
    c2.initialize(4.5, 7.5);

    c3 = c1 + c2;

    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    cout << "c3 = ";
    c3.display();

    return 0;
}
*/