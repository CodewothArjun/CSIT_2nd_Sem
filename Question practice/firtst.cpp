// #include <iostream>
// using namespace std;
// int main()
// {
//     // cout << "Hello World !";
//     // cout << "A first programmer in c++" << endl
//     //  << "arjun";

// int a = 3, d = 4, c = 5;
//     // cout << a << endl;
//     // short f = 5;
//     // cout << f << "\n";
//     // cout << "ARjun";

//     // Taking an input from user and print the result.
//     int a, b;
//     cout << "Enter first number:" << endl;
//     cin >> a;
//     cout << "Enter first number:" << endl;
//     cin >> b;
//     cout << "The sum of two numbers are: " << a + b;
/*      int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;

    }
*/
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// finding a hcf of given number:
// int a, b;

// cout << "Enter the two number a and b : ";
// cin >> a;
// cin >> b;

// cout << "Hcf of a given number is :" << endl
//      << a << endl
//      << b;
//     long double const d = 898.565;
//     float d1 = 4.43;
//     d1 = 34;
//     cout << d << endl;
//     cout << d1;
// int a, b;
// cout << "Enter a  : ";
// cin >> a;
// cout << "and b : ";

// cin >> b;
// int sum = a + b;
// int pro = a * b;
// float div = (float)a / b;
// cout << "sum= " << sum << endl;
// cout << "division= " << div << endl;
// cout << "product= " << pro;

// conditional sentences
//     int age;
//     cout << "Enter your age: " << endl;
//     cin >> age;
//     if (age >= 100 || age < 15)
//     {
//         cout << "YOur can't Vote.";
//     }

//     else if (age >= 18)
//     {
//         cout << "Your are eligible for vote.";
//     }

// Switch cases
// int age;
// cout << "Enter your age: " << endl;
// cin >> age;
// switch (age)
// {
// case 10:
//     cout << "you are 10 years old";
//     break;
// case 18:
//     cout << "Your are 18 years old";
//     break;
// default:
//     cout << "Your are nither 10 nor 18";
// }

// looping
// int index = 0;
//     while (index < 34)
//     {
//         cout << "We are at index number: " << index << endl;
//         index = index + 1;
//     }
// do
// {
//     cout << "We are at index number: " << index << endl;
//     index = index + 1;
// } while (index < 345);

// for (int i = 0; i < 35; i++)
// {
//     cout << "We are at index number: " << index << endl;
//     index = index + 1;
// }

// }

// #include <iostream>
// using namespace std;
// int sum(int, int);
// void product(int, int);
// int main()
// {
// functions
//     int a, b;
//     cout << "Enter first no.: " << endl;
//     cin >> a;
//     cout << "Enter second no.: " << endl;
//     cin >> b;
//     int s = sum(a, b);
//     cout << "Sum of two number is " << s << endl;
//     product(a, b);
//     return 0;
// }
// int sum(int a, int b)
// {
//     int add = a + b;
//     return add;
// }

// void product(int a, int b)
// {

//     cout << "Enter a:";
//     cin >> a;
//     cout << "Enter b:";
//     cin >> b;
//     int pro = a * b;
//     cout << "Product of number is " << pro;

// Array
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[4] = {3, 4, 6, 7};
// cout << arr[3];
// int marks[6];
// for (int i = 1; i <= 6; i++)
// {
//     cout << "Enter the marks of " << i << "th student: " << endl;

//     cin >> marks[i];
// }
// cout << endl
//      << "Output" << endl
//      << endl;
// for (int i = 1; i <= 6; i++)
// {
//     cout << "Marks of " << i << "th students is " << marks[i] << endl;
// }

//     int arr2d[2][3] = {
//         {1, 2, 3},
//         {2, 5, 7}};
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << "The value at " << i << "," << j << " is " << arr2d[i][j] << endl;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class employee
// {
// public:
//     string name;
//     int salary;
//     void printDetails()

//     {
//         cout << "The name of the employee is " << this->name << " And the salary is " << this->salary << endl;
//     }
// };
// int main()
// {
// string
// string a = "Arjun";
// string b = "Sitaram";
// cout << "The length of the naem is " << a.length() << endl;
// cout << "The length of the naem is " << b.length() << endl;
// cout << "The length of the naem is " << a.substr(0, 3) << endl;

// pointer
// int a = 10;
// int *ptr;
// ptr = &a;
// cout << "The memory address of a is " << ptr << endl;
// cout << "The value of a is " << *ptr << endl;
// cout << "The value of a is " << a;

//     employee arj;
//     arj.name = "Sitaram";
//     arj.salary = 19999;
//     // cout << "The name of the employee is " << arj.name << " And the salary is " << arj.salary << endl;
//     arj.printDetails();
//     return 0;
// }

// Opps concepts
/*#include <iostream>
#include <string>
using namespace std;
// example of class and object
class myClass
{
public:
    string name;
    int num;
};

// main program
int main()
{
    myClass stu;
    stu.name = "Arjun";
    stu.num = 5;

    // printing an output
    cout << "Name: " << stu.name << endl
         << "\n";
    cout << "Roll No. : " << stu.num;
    return 0;
}*/

// example of using of methods ---> inside the class or inside method
/*
#include <iostream>
#include <string>
using namespace std;
class metho
{
public:
    void mymethode()
    {
        cout << "hello world";
    }
};

int main()
{
    metho newmethode;
    newmethode.mymethode();
    return 0;
}*/

// example of using of methods ---> outside the class or outside method
/*#include <iostream>
#include <string>
using namespace std;
class meth2
{
public:
    void methods2();
};

void meth2::methods2()
{
    cout << "Hello world";
}

int main()
{
    meth2 obj;
    obj.methods2();
    return 0;
}*/

/*
#include <iostream>
#include <string>
using namespace std;
class meth2
{
public:
    void methods2();
};

void meth2::methods2()
{
    cout << "Hello world";
}

int main()
{
    meth2 obj;
    obj.methods2();
    return 0;
}*/

// Constructor
/*#include <iostream>
#include <string>
using namespace std;
class car
{
public:
    string brand;
    string model;
    int year;

    car(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{
    car obj1("sujuki", "Diamond", 1890);
    car obj2("TATA", "Nano", 1987);
    cout << obj1.brand << endl
         << obj1.model << endl
         << obj1.year << endl;
    cout << obj2.brand << endl
         << obj2.model << endl
         << obj2.year << endl;
}*/

/*#include <iostream>
#include <string>
using namespace std;
class car
{
public:
    string brand;
    string model;
    int year;

    car(string x, string y, int z);
};

car::car(string x, string y, int z)
{
    brand = x;
    model = y;
    year = z;
}

int main()
{
    car obj1("suZuki", "Hira", 1890);
    car obj2("TATA", "Evi", 1987);
    cout << obj1.brand << endl
         << obj1.model << endl
         << obj1.year << endl;
    cout << obj2.brand << endl
         << obj2.model << endl
         << obj2.year << endl;
}*/

// specifier
/*#include <iostream>
using namespace std;
class myclass
{
public:
    int a;

private:
    int b; // It is not asscciable from outside the class.
};

int main()
{
    myclass objpp;
    objpp.a = 6;
    objpp.b = 334;
    cout << objpp.a << endl;
    cout << objpp.b << endl;

    return 0;
}
*/

/*#include <iostream>
using namespace std;
class myclass
{
public:
    int a;

private:
    int b; // It is not asscciable from outside the class.
};

int main()
{
    myclass objpp;
    objpp.a = 6;
    objpp.b = 334;
    cout << objpp.a << endl;
    cout << objpp.b << endl;

    return 0;
}*/

/*#include <iostream>
using namespace std;
class myclass
{

private:
    int account; // It is not asscciable from outside the class.
public:
    void setAccount(int ac)
    {
        account = ac;
    }
    int getAccount()
    {
        return account;
    }
};

int main()
{
    myclass customer;
    customer.setAccount(54300);
    cout << "Account No.  : " << customer.getAccount();

    return 0;
}*/

// inheritance
/*#include <iostream>
#include <string>
using namespace std;

// parant class
class vechile
{
public:
    string model;
    void show()
    {
        cout << "Welcome To Vehicle Showroom\n";
    }
};

// Child class
class bus : public vechile
{
    string brand;
};

// Main
int main()
{
    bus mybus;
    mybus.show();
    mybus.model = "TASLA";
    // mybus.brand = "Everest";
    cout << "Model:" << mybus.model;

    return 0;
}*/

// multilevel inheritance
/*l = "TASLA";
    cout << #include <iostream>
#include <string>
using namespace std;

// parant class
class vechile
{
public:
    string model;
    void show()
    {
        cout << "Welcome To Vehicle Showroom\n";
    }
};

// Child class
class bus : public vechile
{
public:
    string brand;
};

// Grand child class
class car : public bus
{
public:
    void color()
    {
        cout << "red" << endl;
    }
};
// Main
int main()
{
    car mybus;
    mybus.show();
    mybus.color();
    mybus.brand = "BMW";
    mybus.mode"Model:" << mybus.model << endl
         << "Brand: " << mybus.brand << endl;

    return 0;
}*/

// multilevel inheritance
/*#include <iostream>
using namespace std;

// Base class
class tula
{
public:
    void myFunction()
    {
        cout << "Some content in parent class.\n";
    }
};

// Another base class
class bhupal
{
public:
    void myOtherFunction()
    {
        cout << "Some content in another class.\n";
    }
};

// Derived class
class arjun : public tula, public bhupal
{
};

int main()
{
    arjun myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}*/

// Access specifier -- protected
/*#include <iostream>
using namespace std;
class employee
{
protected:
    int salary;
};

class coder : public employee
{
public:
    void setting(int income)
    {
        salary = income;
    }
    int getting()
    {
        return salary;
    }
};

int main()
{
    coder skill;
    skill.setting(5600);
    cout << "Salary of a employee: " << skill.getting();
    return 0;
}*/

#include <iostream>
using namespace std;
// making a class and object
int main()
{
    cout << "hello world";
    return 0;
}