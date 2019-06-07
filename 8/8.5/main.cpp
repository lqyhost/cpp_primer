#include <iostream>

using namespace::std;

template <typename T>

T max5(T *pt)
{
    T t = pt[0];
    for(int i=1;i<5;i++)
    {
        if (t < pt[i])
        {
            t = pt[i];
        }
    }
    return t;
}

int main()
{
    int a[] = {1,2,3,9,5};
    double b[] = {1.2,2.3,3.4,7.5,5.6};
    cout<<max5(a)<<endl;
    cout<<max5(b)<<endl;
    return 0;
}