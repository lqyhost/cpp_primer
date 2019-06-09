#include <iostream>
#include "golf.h"

int main()
{
    using namespace::std;
    char ch[50];
    int hc;
    golf gf;
    cout<<"name: ";
    cin.getline(ch, 50);
    cout<<"handicap: ";
    cin>>hc;
    setgolf(gf, ch, hc);
    showgolf(gf);
    handicap(gf, 5);
    showgolf(gf);
    int number = 5;
    golf gfs[number];
    int i;
    for (i = 0; i<number; i++)
    {
        if (!setgolf(gfs[i]))
            break;
    }
    for (int j = 0; j<i; j++)
    {
        showgolf(gfs[j]);
    }
}