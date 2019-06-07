#include <iostream>

using namespace::std;

double caculate(double a, double b, double (*pf)(double,double))
{
    return (*pf)(a, b);
}

double add(double x, double y)
{
    return x + y;
}

double multiply(double x, double y)
{
    return x * y;
}

int main()
{
    double x = 15.5;
    double y = 16.5;
    cout << caculate(x, y, add) << endl;
    cout << caculate(x, y, multiply) << endl;
    return 0;

}