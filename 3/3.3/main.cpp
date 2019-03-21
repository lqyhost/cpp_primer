#include <iostream>

using namespace::std;

const double CHARGE = 60;

int main()
{
    int degrees_s = 0;
    int minutes_s = 0;
    int seconds_s = 0;
    cout<<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
    cout<<"First, enter the degrees: ";
    cin>>degrees_s;
    cout<<"Next, enter the minutes of arc:";
    cin>>minutes_s;
    cout<<"Finally, enter the seconds of arc:";
    cin>>seconds_s;
    double degrees_a = degrees_s + minutes_s/CHARGE + seconds_s/CHARGE/CHARGE;
    cout<<degrees_s<<" degrees, "<<minutes_s<<"minutes, "<<seconds_s<<" seconds = "<<degrees_a<<" degrees"<<endl;
    return 0;
}