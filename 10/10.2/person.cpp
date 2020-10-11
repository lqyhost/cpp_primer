#include "person.h"

Person::Person(const std::string & ln, const char * fn )
{
    this->lname = ln;
    strcpy(this->fname, fn);
}
void Person::Show() const
{
    std::cout<<"first name: "<<fname<<" last name: "<<lname<<std::endl;
}

void Person::FormalShow() const
{ 
    std::cout<<"last name: "<<lname<<" first name: "<<fname<<std::endl;
}
