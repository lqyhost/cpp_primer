#include "vector_.h"


vector_::vector_()
{
    this->x = 0;
    this->y = 0;
}
vector_::vector_(double x, double y)
{
    this->x = x;
    this->y = y;
}
vector_ vector_::operator +(const vector_ &v)const
{
    vector_ sum;
    sum.x = this->x + v.x;
    sum.y = this->y + v.y;
    return sum; 
}
void vector_::show()const
{
    cout<<"Point position is ("<<this->x<<", "<<this->y<<")"<<endl;
}