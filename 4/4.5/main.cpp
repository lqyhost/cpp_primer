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
    CandyBar snack = {"Mocha Munch",2.3,350};
    cout<<snack.band<<endl<<snack.wight<<endl<<snack.calrie<<endl;
    return 0;
}