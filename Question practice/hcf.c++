

// copying
/*
#include <iostream>
using namespace std;
int gcd(int a, int b){
   if (a == 0)
      return b;
   if (b == 0)
      return a;
   if (a == b)
      return a;
   if (a > b)
      return gcd(a-b, b);
   return gcd(a, b-a);
}
int main(){
   int a = 98, b = 56;
   cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
   return 0;
}
*/

#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int min_num = min(a, b);
    if (a % min_num == 0 && b % min_num == 0)
        return min_num;
    for (int i = min_num / 2; i >= 2; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
    return 1;
}
int main()
{
    int a = 8, b = 48;
    cout << "HCF: " << gcd(a, b);
}