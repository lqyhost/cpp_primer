#include <iostream>

using namespace::std;

int factorial(int i)
{
    if (i == 1)
        return 1;
    else
    {
        return i*factorial(i-1);
    }
}

int main()
{
    cout<<"i: ";
    int i;
    cin>>i;
    cout<<"factorial i:"<<factorial(i)<<endl;
    return 0;
}

