#include <iostream>
#include "vector_.h"

using namespace::std;

int main()
{
    vector_ vs[20] = {{1,2},{3,4},{5,6},{9,4.5},{1,2},{3,4},{5,6},{9,4.5},{9,4.5},{1,2},{9,4.5},{1,2},{3,4},{5,6},{9,4.5},{9,4.5},{1,2},{3,4},{5,6},{9,4.5}};
    vector_ sum = vs[0];
    for (int i = 1; i<20; i++)
    {
        sum = sum + vs[i];
        sum.show();
        sum.show();
    }
    return 0;

}