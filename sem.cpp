#include <iostream>
using namespace std;
unsigned long long int factorial(unsigned int s)
{
    unsigned long int m = 1;
    for(int i = 1;i <= s;i++)
    {
        m = i * m;
    }
    return m;
}
int main ()
{
    unsigned  int b;
    cin >> b;
        cout << factorial(b) << endl;
    return 0;
}
