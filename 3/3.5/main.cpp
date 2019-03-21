#include <iostream>

using namespace::std;

int main()
{
    long long wd_pu = 0, us_pu = 0;
    cout<<"Enter the world's population: ";
    cin>>wd_pu;
    cout<<"Enter the population of the US: ";
    cin>>us_pu;
    cout<<"The poipulation of the US is "<<us_pu*1.0/wd_pu*100<<" of the world population."<<endl;
}