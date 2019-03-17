#include <iostream>

using namespace::std;

double tran_ce2fa(int ce)
{
    return 1.8 * ce + 32.0;
}

int main()
{
    int ce = 0;
    cout << "Please enter a Celsius value(int): ";
    cin >> ce;
    cout << ce << " degrees Celsius is "<<tran_ce2fa(ce) << " degrees Fahrenheit"<<endl;
}