#include <iostream>
#include <array>

using namespace::std;

const int ArSize = 16;

int main()
{
    array<double,ArSize> factorials;
    factorials[1] = factorials[0] = 1;
    for(int i = 2; i< ArSize; i++)
    {
        factorials[i] = factorials[i-1]*i;
    }
    for(int i = 0; i< ArSize; i++)
    {
        cout<<"factorials "<<i<<"! is "<<factorials[i]<< endl;
    }
}