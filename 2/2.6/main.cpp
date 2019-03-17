#include <iostream>

using namespace::std;

double tran_lt2au(double ly)
{
    return 63240 * ly;
}

int main()
{
    double ly = 0;
    cout << "Enter the number of light years (doubtl): ";
    cin >> ly;
    cout << ly << " light yeras is "<<tran_lt2au(ly) << " astronomical units."<<endl;
}