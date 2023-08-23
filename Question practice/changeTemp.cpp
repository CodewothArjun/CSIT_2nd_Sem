// convert temperature from farhenit to celcius
#include <iostream>
using namespace std;
class temperature
{
private:
    float fahr, celc, temp;

public:
    float calculate(float fahr)
    {
        celc = 5 * (fahr - 32) / 9;
        return celc;
    }
};

int main()
{
    float fahr;
    cout << "Enter the temperature in farhenit: ";
    cin >> fahr;

    temperature clim;
    cout << clim.calculate(fahr);

    return 0;
}