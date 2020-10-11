#include <iostream>

struct customer
{
    char fullname[35];
    double payment;
};

class List
{
private:
    int i=0;
    customer ctms[10];
    double sum_payment=0;
public:
    bool is_empty();
    bool is_full();
    bool push(customer &c);
    bool pop();
    customer get();
    void show_payment();
    bool set(int i);
};