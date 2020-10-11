#include <iostream>

using namespace::std;

class Plorg
{
private:
    char name[19] = "Plorga";
    int CI;
public:
    Plorg();
    Plorg(const char *na, const int ci);
    void reset_ci(const int ci);
    void report();
};
