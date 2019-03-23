#include <iostream>
#include <array>

using namespace::std;

int main()
{
    array<double, 10> donations;
    int i = 0;
    double sum = 0, avg = 0;
    cout<<"Entter donation:";
    cin>>donations[i];
    while(!cin.fail())
    {
        sum += donations[i];
        i++;
        cin>>donations[i];
    }
    avg = sum / i;
    int num_big = 0;
    for (int j = 0; j<i; j++)
    {
        if (donations[j] > avg)
        {
            num_big ++;
        }
    }
    cout<<"avg: "<<avg<<endl;
    cout<<"num_big: "<<num_big<<endl;
}