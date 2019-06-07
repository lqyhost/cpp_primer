#include <iostream>

using namespace::std;

long double probability(unsigned numbers,unsigned picks);

int main()
{
    cout<<"the p of take 5 from 47 and take 1 from 27: "<<endl;
    cout << probability(47,5)*probability(27,1) << endl;
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0;  n --, p --)
        result = result * n / p;
    return result;
}