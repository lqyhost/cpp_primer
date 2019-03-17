#include <iostream>

using namespace::std;

void cout_time(int hours, int minutes)
{
    cout<<"Time: "<<hours<<":"<<minutes<<endl;
}

int main()
{
    int hours = 0;
    int minutes = 0;
    cout << "Enter the number of hours(int): ";
    cin >> hours;
    cout << "Enter the number of minutes(int): ";
    cin >> minutes;
    cout_time(hours,minutes);
}