// #include <iostream>
// using namespace std;
// int count = 0;
// class destruct
// {
// public:
//     destruct()
//     {
//         count++;
//         cout << "\n No. of object created " << count;
//     }
//     ~destruct()
//     {
//         cout << "\n No. of object destroyed " << count;
//         count--;
//     }
// };

// int main()
// {
//     destruct d1, d2, d3;
//     return 0;
// }

#include <iostream>
using namespace std;
int count = 0;
class Destruct
{

public:
    Destruct()
    {
        count++;
        cout << "\n No. of object created " << count;
    }
    ~Destruct()
    {
        cout << "\n No. of object destroyed " << count;
        count--;
    }
};

int main()
{
    cout << "\n Enter Main: ";
    {
        Destruct A1, A2, A3, A4;

        {
            cout << "\n Enter block 1";
            Destruct A5;
        }
        {
            cout << "\n Enter block 2";
            Destruct A6;
        }
        cout << "\n Re-Enter main ";
    }
    return 0;
}