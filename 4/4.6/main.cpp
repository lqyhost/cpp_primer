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
    CandyBar snacks[3];
    snacks[0] = {"Mocha Munch",2.3,350};
    snacks[0] = {"Mocha Munch1",2.4,330};
    snacks[0] = {"Mocha Munch2",2.5,370};
    for (int i = 0; i<sizeof(snacks)/sizeof(snacks[0]); i++)
    {
        cout<<snacks[i].band<<endl<<snacks[i].wight<<endl<<snacks[i].calrie<<endl;
    }
    return 0;
}