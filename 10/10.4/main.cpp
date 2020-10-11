#include <iostream>
#include "sales.h"

using namespace::std;
using namespace::SALES;

int main()
{
    
    double sls[] = {1.1,2.3,3.5};
    Sales s1(sls, 3);
    s1.showSales();
    Sales s2;
    s2.showSales();
    return 1;
}