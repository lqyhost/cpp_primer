//golf.h -- for pe9-1.cpp
#include "golf.h"
#include <string.h>

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    std::cout<<"Input golf name and handicap:"<<std::endl;
    std::cout<<"full name: (string)";
    char name[50];
    std::cin.getline(name,50);
    std::cin.getline(name,50);
    strcpy(g.fullname, name);
    if (strlen(g.fullname) == 0)
        return 0;
    std::cout<<"handicap: (int)";
    std::cin>>g.handicap;
    return 1;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    std::cout<<g.fullname<<"'s handicap:"<<g.handicap<<std::endl;
}