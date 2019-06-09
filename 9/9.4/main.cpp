#include <iostream>
#include "sales.h"

using namespace::std;
using namespace::SALES;

int main()
{
    Sales s;
    double sls[] = {1.1,2.3,3.5};
    setSales(s, sls, 3);
    showSales(s);
    setSales(s);
    showSales(s);
    return 1;
}