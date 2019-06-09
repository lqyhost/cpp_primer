//golf.h -- for pe9-1.cpp
#include <iostream>

const int Len = 50;
struct golf
{
    char fullname[Len];
    int handicap;
};

//non-interactive version:

void setgolf(golf & g, const char * name, int hc);

int setgolf(golf & g);

void handicap(golf & g, int hc);

void showgolf(const golf &g);