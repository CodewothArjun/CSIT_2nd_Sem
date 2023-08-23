// 5.	Create a new class named city that will have two member variables Cityname(char[20]},and DistFromKTM(float). Add member functions to set and retrieve the CityName and DistFrom KTM separately. Add new member functions AddDistance that takes two arguments of class City and returns the sum of DistFrom KTM of two arguments. In main function,initialize three city objects. Set the first and second city to be Pokhara and Dhangadi. Display the sum of DistFromKTM of Pokhara and Dhangadi calling AddDistance function of third city object. (use objects as function Arguments).

#include <iostream>
#include <string.h>

using namespace std;
class City
{
    char CityName[20];
    float DistFromKTM, sum;

public:
    void set(char shahar[], float dist)
    {
        strcpy(CityName, shahar);
        DistFromKTM = dist;
    }
    void retrieve()
    {
        cout << "\n\nCity name : " << CityName << "\nDistance: " << DistFromKTM << "\n";
    }

    void AddDistance(City c1, City c2)
    {
        sum = c1.DistFromKTM + c2.DistFromKTM;
        cout << sum;
    }
};

int main()
{
    City CT1, CT2, CT3;
    CT1.set("Dolakha", 1700);
    CT1.retrieve();
    CT2.set("Pokhera", 2000);
    CT2.retrieve();

    CT3.AddDistance(CT1, CT2);
    return 0;
}