// Create a class called student with three data members (student name[20], roll_no, Address) function called input-data() to take details of the students from the user, and a function called display_data( )to display the details of the students. In main, create two objects of the class student  and for each call both of the functions.

#include <iostream>
using namespace std;
class student
{
    char name[20];
    int roll_no;
    string Address;

public:
    void input_data()
    {
        cout << "Enter the student name, roll no. and address: ";
        cin >> name >> roll_no >> Address;
    }
    void display()
    {
        cout << "Details of the student"
             << "\n"
             << "Name: " << name << "\n"
             << "Roll No.: " << roll_no << "\n"
             << "Address: " << Address;
    }
};

int main()
{
    student std1, std2;
    std1.input_data();
    std1.display();
    std2.input_data();
    std2.display();
    return 0;
}