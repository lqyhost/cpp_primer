/*
//using struture
*/
#include <iostream>
#include <string>

using namespace::std;

const int Seasons = 4;
const char* Snames[Seasons] = {"Spring", "Summer",  "Fall", "Winter"};

struct cost
{
    double expenses;
};

void fill(cost *pa, int seasons);
void show(cost const *da, int seasons);

int main()
{
    cost expenses[Seasons];
    fill(expenses, Seasons);
    show(expenses, Seasons);
    return 0;
}

void fill(cost *pa, int seasons)
{
    for (int i = 0; i < seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin>>pa[i].expenses;
    }
}

void show(cost const *da, int seasons)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < seasons; i++)
    {
        cout << Snames[i] << ": $ " << da[i].expenses << endl;
        total += da[i].expenses;
    }
    cout<< "Total Expenses: $"<<total<<endl;
}