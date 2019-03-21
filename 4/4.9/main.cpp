#include <iostream>
#include <string>

using namespace::std;

struct CandyBar
{
    string band;
    double wight;
    int calrie;
};


int main()
{
    int n = 3;
    CandyBar *snacks= new CandyBar[n];
    snacks[0] = {"Mocha Munch",2.3,350};
    snacks[1] = {"Mocha Munch1",2.4,330};
    snacks[2] = {"Mocha Munch2",2.5,370};
    for (int i = 0; i<n; i++)
    {
        cout<<snacks[i].band<<endl<<snacks[i].wight<<endl<<snacks[i].calrie<<endl;
    }
    return 0;
}