#include <iostream>
#include "golf.h"

int main()
{
    using namespace::std;
    char ch[50];
    int hc;
    cout<<"name: ";
    cin.getline(ch, 50);
    cout<<"handicap: ";
    cin>>hc;
    Golf gf(ch, hc);
    gf.showgolf();
    gf.set_handicap(33);
    gf.showgolf();
    Golf gf1;
    gf1.showgolf();
    int number = 5;
    Golf gfs[5];
    for (int i = 0;i<number; i++)
    {
        gfs[i].showgolf();
    }
}