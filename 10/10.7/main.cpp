#include "plorg.h"

int main()
{
    Plorg pl;
    pl.report();
    pl.reset_ci(15);
    pl.report();
    Plorg pl1("Lady Gaga", 155);
    pl1.report();
    return 0;
}