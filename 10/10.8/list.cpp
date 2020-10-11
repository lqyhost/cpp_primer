#include "list.h"

bool List::is_empty()
{
    if (i==0)
        return true;
    else
        return false;
}
bool List::is_full()
{
    if (i==10)
        return true;
    else
        return false;
}

bool List::push(customer &c)
{
    this->ctms[i] = c;
    i ++;
}

bool List::pop()
{
    this->sum_payment += this->ctms[i-1].payment;
    i --;
}

customer List::get()
{
    customer c;
    c = this->ctms[i-1];
    return c;
}

void List::show_payment()
{
    std::cout<<this->sum_payment<<std::endl;
}

bool List::set(int i)
{
    this->ctms[i-1].payment = 0;
    return true;
}