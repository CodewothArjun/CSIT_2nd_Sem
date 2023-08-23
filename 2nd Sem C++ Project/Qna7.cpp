// 7.	WAP declaring a class and object to input assessment marks and practical marks defining functions setmark and publishmark. Define the function inside the class.
#include <iostream>
using namespace std;
class Result
{
    float ass_mark, prac_mark;

public:
    void setmark()
    {
        cout << "Please enter the assessment marks you got: ";
        cin >> ass_mark;
    };
    void publishmark()
    {
        cout << "Please enter the practical marks you got: ";
        cin >> prac_mark;
    };
    void display()
    {
        cout << "The Total Marks: " << ass_mark + prac_mark;
    }
};
int main()
{
    Result Re;
    Re.setmark();
    Re.publishmark();
    Re.display();
    return 0;
}