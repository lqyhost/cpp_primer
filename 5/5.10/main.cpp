#include <iostream>
#include <cstring>

using namespace::std;

int main()
{
    int line_number = 0;
    cout<<"Enter the number you want:";
    cin>>line_number;
    for (int i = 1; i<line_number+1; i++)
    {
        for (int k=0;k<line_number-i; k++)
        {
            cout<<".";
        }
        for (int k=0;k<i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}