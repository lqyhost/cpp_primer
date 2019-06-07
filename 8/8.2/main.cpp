#include <iostream>

using namespace::std;

struct CandyBar
{
    string band_name;
    double weight;
    int calorie;
};

void set_candybar(CandyBar &cb, char *band, double wt, int cl);
void show_candybar(const CandyBar &cb);
int main()
{
    char *band = "Millennium Munch";
    double wt = 2.95;
    int cl = 360;
    CandyBar cb;
    set_candybar(cb,  band, wt, cl);
    show_candybar(cb);
    return 0;
}

void set_candybar(CandyBar &cb, char *band="Millennium Munch", double wt=2.85, int cl=350)
{
    cb.band_name = band;
    cb.weight = wt;
    cb.calorie = cl;
}

void show_candybar(const CandyBar &cb)
{
    cout<<"name: "<<cb.band_name<<endl;
    cout<<"weight: "<<cb.weight<<endl;
    cout<<"calorie: "<<cb.calorie<<endl;
}