#include <iostream>
using namespace std;
class UserDef
{
    int num;
    char nam;

public:
    // default constructor
    UserDef(){};
    UserDef(char ptr)
    {
        num = int(ptr);
        nam = ptr;
    }
    UserDef(int n)
    {
        num = char(n);
        nam = n;
    }
    void show()
    {
        cout << "\nCharacter: " << nam << "\nAfer Typecasting char to Number: " << num;
    }
    void show1()
    {
        cout << "\nNumber: " << num << "\nAfer Typecasting Number to string: " << nam;
    }
};

int main()
{
    char s = 'a';
    int n = 65;
    UserDef User1, User2;
    User1 = s;
    User2 = n;
    User1.show();
    User2.show1();
    return 0;
}