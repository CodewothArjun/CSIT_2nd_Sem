// calculating the simple interest of given data
#include <iostream>
using namespace std;
class simpleInterest
{
private:
    float percent;
    int principle, time;

public:
    void SimInt(float percent, int principle, int time)
    {
        cout << (principle * percent * time) / 100;
    }
};

int main()
{
    int p, t;
    float r;
    cout << "Enter the principle, rate and time: ";
    cin >> p >> t >> r;
    simpleInterest SI;
    SI.SimInt(r, p, t);
}