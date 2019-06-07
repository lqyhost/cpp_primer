#include <iostream>

using namespace::std;

int fill_array(double *ar, int length)
{
    int i;
    for (i=0;i<length;i++)
    {
        if (!(cin>>ar[i]))
            break;
    }
    return i;
}

void show_array(double const *ar, int length)
{
    for (int i=0;i<length;i++)
    {
        cout<<i<<": "<<ar[i]<<endl;
    }
}

void reverse_array(double *ar, int length)
{
    double cg;
    for (int i=0; i<length/2;i++)
    {
        cg = ar[length-i-1];
        ar[length-i-1] = ar[i];
        ar[i] = cg;
    }
}

int main()
{
    int i = 0;
    double ar[100];
    i = fill_array(ar, 100);
    show_array(ar, i);
    reverse_array(ar, i);
    show_array(ar,i);
}