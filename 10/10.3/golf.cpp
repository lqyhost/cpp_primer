//golf.h -- for pe9-1.cpp
#include "golf.h"
#include <string.h>

Golf::Golf()
{
    std::cout<<"Input golf name and handicap:"<<std::endl;
    std::cout<<"full name: (string)";
    char name[50];
    std::cin.getline(name,50);
    std::cin.getline(name,50);
    strcpy(this->fullname, name);
    if (strlen(fullname) == 0)
        return;
    std::cout<<"handicap: (int)";
    std::cin>>this->handicap;
}

Golf::Golf(const char * name, int hc)
{
    strcpy(this->fullname, name);
    this->handicap = hc;
}
void Golf::set_handicap(int hc)
{
    this->handicap = hc;
}

void Golf::showgolf()
{
    std::cout<<fullname<<"'s handicap:"<<handicap<<std::endl;
}