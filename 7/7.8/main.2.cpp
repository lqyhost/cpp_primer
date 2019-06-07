/* 
//using list
*/
#include <iostream>
#include <string>

using namespace::std;

const int Seasons = 4;
const char* Snames[Seasons] = {"Spring", "Summer",  "Fall", "Winter"};

void fill(double *pa, int seasons);
void show(double const *da, int seasons);

int main()
{
    double expenses[Seasons];
    fill(expenses, Seasons);
    show(expenses, Seasons);
    return 0;
}

void fill(double *pa, int seasons)
{
    for (int i = 0; i < seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin>>pa[i];
    }
}

void show(double const *da, int seasons)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < seasons; i++)
    {
        cout << Snames[i] << ": $ " << da[i] << endl;
        total += da[i];
    }
    cout<< "Total Expenses: $"<<total<<endl;
}