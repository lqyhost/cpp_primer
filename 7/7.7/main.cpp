#include <iostream>

using namespace::std;

double* fill_array(double *ar)
{
    int * pt;
    int i;
    while(true)
    {
        if (!(cin>>ar[i]))
            break;
        i += 1;
    }
    return &ar[i];
}

void show_array(double const *start, double const *end)
{
    const double * pt;
    for (pt=start; pt!=end; pt++)
    {
        cout << *pt << endl;
    }
}

void reverse_array(double *start, double *end)
{
    double cg;
    double * pt;
    for (;((start!=end) and (start+1 != end));start++,end--)
    {
        cg = *start;
        *start = *(end-1);
        *(end-1) = cg;
    }
}

int main()
{
    int i = 0;
    double ar[100];
    double *p = fill_array(ar);
    cout<<"&: "<<&ar<<" &:"<<p<<endl;
    show_array(ar, p);
    reverse_array(ar, p);
    show_array(ar,p);
}