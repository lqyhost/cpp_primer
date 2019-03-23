#include <iostream>

using namespace::std;

int main()
{
    int start, end, sum = 0;
    cout<<"Enter start(int): ";
    cin>>start;
    cout<<"Enter end(int): ";
    cin>>end;
    for (int i = start; i<end+1; i++)
    {
        sum += i;
    }
    cout<<"sum betwin "<<start<<" "<<end<<" is "<<sum<<endl;
}