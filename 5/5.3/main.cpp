#include <iostream>
#include <array>

using namespace::std;

const int ArSize = 16;

int main()
{
    double input, sum=0;
    cout<<"Enter a number: ";
    cin>>input;
    while (input != 0)
    {
        sum += input;
        cout<<"sum is: "<<sum<<endl;
        cout<<"Enter a number: ";
        cin>>input;
    }
}