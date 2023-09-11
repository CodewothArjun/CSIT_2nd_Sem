#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    Student(){};   // Default constructor
    Student(int x) // Parameterized constructor
    {
        roll = x;
    }
    void RollDis() // member function
    {
        cout << "Roll No. = " << roll << endl;
    }
};

class Test : virtual public Student
{
protected:
    float sub1, sub2;

public:
    Test(float x, float y)
    {
        sub1 = x;
        sub2 = y;
    }
    void SubDis()
    {
        cout << "Sub1 and Sub 2: " << sub1 << " , " << sub2 << endl;
    }
};

class Sports : public virtual Student
{
protected:
    float score;

public:
    Sports(int q)
    {
        score = q;
    }
    void ScorDis()
    {
        cout << "Score: " << score << endl;
    }
};

class Result : public Test, public Sports
{
protected:
    float Total;

public:
    Result(int m, float n, float p, float q) : Student(m), Test(n, p), Sports(q)
    {
        Total = n + p + q;
    }
    void display()
    {
        RollDis();
        SubDis();
        ScorDis();
        cout << "Total = " << Total << endl;
    }
};

int main()
{
    Result std1(20, 10.5, 32.6, 9.88);
    std1.display();
}