#include <iostream>

using namespace::std;

class vector_
{
public:
    static int n;
    vector_();
    vector_(double x, double y);
    vector_ operator +(const vector_ &v)const;
    void show()const;
private:
    double x;
    double y;
};