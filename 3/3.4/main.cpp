#include <iostream>

using namespace::std;

int main()
{
    long long seconds_b = 0;
    cout<<"Enter the number of seconds: ";
    cin>>seconds_b;
    int seconds = seconds_b%60;
    int minutes = seconds_b/60%60;
    int hours = seconds_b/60/60%24;
    int days = seconds_b/60/60/24;
    cout<<seconds_b<<" seconds = "<<days<<" days, "<<hours<<" hours,"<<minutes<<" minutes, "<<seconds<<" seconds"<<endl;
    return 0;
}