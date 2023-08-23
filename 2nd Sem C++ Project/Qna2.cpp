// 2.	Write a program to overload a function  that receives float, character and int type of data.
#include <iostream>
using namespace std;
class Overload
{
private:
    int inum;
    float fnum;
    char ch;

public:
    void receive(int ni)
    {
        inum = ni;
    }
    void receive(double nf)
    {
        fnum = nf;
    }
    void receive(char c)
    {
        ch = c;
    }
    void display()
    {

        cout << "Integer: "  << inum << "\n" "Float: "<< fnum << "\n""Character: "<< ch << "\n";
    }
};

int main()
{
    cout << "\n\n2. Write a program to overload a function  that receives float, character and int type of data. - 'Arjun Mijar'\n\n";
    Overload O1;
    O1.receive(12);
    O1.receive(12.5);
    O1.receive('A');
    O1.display();

    cout << "\n";

    return 0;
}