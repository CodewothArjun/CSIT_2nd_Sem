// 3.Solve Q. No. 2 by defining at least one constructor in each class
// derived class should provide data to base class
// roll, subj1, subj2, score take data from main, => student(roll),test(subj1,subj2), sport(sp)
/*
#include <iostream>
using namespace std;
class student
{
    int roll;

public:
    student(int mark)
    {
        roll = mark;
    }
};

int main(){
    Result R1(110,45,87,8.0);
    R1.putnumber();
    R1.putmarks();
    R1.putscore();
    return 0;
}
*/
#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    // Default constructor
    student(){};

    // Parameterized constructor
    student(int a)
    {
        roll_number = a;
    }
    // Member function
    void displayRollNumber()
    {
        cout << "Roll No: " << roll_number << "\n";
    }
};

// Inheriting base class-(student) into derived class-(test)
class test : virtual public student
{
protected:
    float part1, part2;

public:
    // Parameterized constructor
    test(float x, float y, int a) : student(a)
    {
        part1 = x;
        part2 = y;
    }
    // member function
    void displayMarks()
    {
        cout << "Marks obtained:\n"
             << "Part1 = " << part1 << "\n"
             << "Part2 = " << part2 << "\n";
    }
};

// Inheriting base class-(student) into derived class-(sports)
class sports : virtual public student
{
protected:
    float score;

public:
    sports(float s, int a) : student(a)
    {
        score = s;
    }
    void displaySportsScore()
    {
        cout << "Sports weightage: " << score << "\n";
    }
};

// Inheriting base class-(test) and base class-(sports) into derived class-(result)
class result : public test, public sports
{
    float total;

public:
    // Parameterized constructor
    result(float x, float y, float s, int a) : test(x, y, a), sports(s, a)
    {
        total = part1 + part2 + score;
    }

    // Member function
    void displayTotal()
    {
        displayRollNumber();  // Accessing the roll_number using the base class method
        displayMarks();       // Accessing the marks using the test class method
        displaySportsScore(); // Accessing the sports score using the sports class method
        cout << "Total score: " << total << "\n";
    }
};

int main()
{
    // making object(std1) from derived class-(result);
    result std1(80, 90, 75, 23);
    std1.displayTotal();

    return 0;
}