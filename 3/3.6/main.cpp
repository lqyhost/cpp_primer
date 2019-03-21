#include <iostream>

using namespace::std;

int main()
{
    double mail = 0, kilometer = 0, gallon = 0;
    bool is_km = false;
    cout<<"is kilometer:(true/false)";
    cin>>is_km;
    cout<<"Enter gas used (gallon):";
    cin>>gallon;
    if(is_km)
    {
        cout<<"Enter the distance (kilometer) :";
        cin>>kilometer;
        cout<<"you need  "<<gallon/kilometer*100<<" gallon gas for 100 kilometer"<<endl;
    }
    else
    {
        cout<<"Enter the distance (mail) :";
        cin>>mail;
        cout<<"1 gallon gas can take you driver for "<<mail/gallon<<" mail"<<endl;
    }
    return 0;
}