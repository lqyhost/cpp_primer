//golf.h -- for pe9-1.cpp
#include <iostream>

class Golf
{
private:
    static const int Len = 50;
    char fullname[Len];
    int handicap;
public:
    Golf();
    Golf(const char * name, int hc);
    void set_handicap(int hc);
    void showgolf();
};