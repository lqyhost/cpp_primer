#include "stack.h"

bool Stack::push(customer &c)
{
    this->ctms[i] = c;
    i ++;
}

bool Stack::pop()
{
    this->sum_payment += this->ctms[i-1].payment;
    i --;
}

customer Stack::get()
{
    customer c;
    c = this->ctms[i-1];
    return c;
}

void Stack::show_payment()
{
    std::cout<<this->sum_payment<<std::endl;
}