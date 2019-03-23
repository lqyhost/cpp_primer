#include <iostream>
#include <array>

using namespace::std;

const int ArSize = 16;

int main()
{
    double Daphne_return = 100, Cleo_return = 100, static_profit = 0.1*Daphne_return ;
    int i =0;
    while(Cleo_return <= Daphne_return)
    {
        i += 1;
        Daphne_return += static_profit;
        Cleo_return *= 1.05;
    }
    cout<<" after "<<i<<" years "<< " Cleo get more money then Daphne by "<< Cleo_return<<" to "<<Daphne_return<<endl;
}