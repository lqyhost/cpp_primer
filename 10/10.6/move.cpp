#include "move.h"

Move::Move(double a, double b)
{
    this->x = a;
    this->y = b;
}

void Move::showmove() const
{
    cout<<"x: "<<this->x<<" y: "<<this->y<<endl;
}

Move Move::add(const Move &m) const
{
    Move nm;
    nm.x = this->x + m.x;
    nm.y = this->y + m.y;
    return nm;
}

void Move::reset(double a, double b)
{
    this->x = a;
    this->y = b;
}