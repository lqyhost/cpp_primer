#include "plorg.h"

Plorg::Plorg()
{}

Plorg::Plorg(const char *na, const int ci)
{
    strcpy(this->name, na);
    this->CI = ci;
}

void Plorg::reset_ci(const int ci)
{
    this->CI = ci;
}

void Plorg::report()
{
    cout<<this->name<<"'s CI: "<<this->CI<<endl;
}