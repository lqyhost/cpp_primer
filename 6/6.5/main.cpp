#include <iostream>

using namespace::std;

int main()
{
    double earn_before_tax = 0,earn_after_tax = 0;
    cout<<"Enter your earn: ";
    cin>>earn_before_tax;
    while(!cin.fail() || earn_before_tax>0)
    {
        if (earn_before_tax >= 35000)
        {
            earn_after_tax = 5000 + 10000 * 0.9 + 20000 * 0.85 + (earn_before_tax-35000)*0.8;
        }
        else if (earn_before_tax >= 15000)
        {
            earn_after_tax = 5000 + 10000 * 0.9 + (earn_before_tax-15000)*0.85;
        }
        else if (earn_before_tax >= 5000)
        {
            earn_after_tax = 5000 + (earn_before_tax-5000)*0.9;
        }
        else
        {
            earn_after_tax = earn_before_tax;
        }
        cout<<"you neet pay tax by: "<<earn_before_tax - earn_after_tax<<endl;
        cout<<"Enter your earn: ";
        cin>>earn_before_tax;
    }
}

