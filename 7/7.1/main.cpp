#include <iostream>
#include <fstream>
#include <string>

using namespace::std;

double harmonic_mean(double value1, double value2)
{
    if ((value1 + value2) != 0)
        return 2.0 * value1 * value2 / (value1 + value2);
    else
        cout<<"value1 + value2 = 0"<<endl;
        return 0;
}

int main()
{
    double a, b;
    cout<<"please enter two number:"<<endl;
    cout<<"enter 0 to quit"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    while(a*b !=0)
    {
        cout<< "harmonic mean of a " << a << " b " << b << harmonic_mean(a,b) << endl;
        cout<<"a: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;
    }
}