#include <iostream>

using namespace::std;

template <typename T>
T maxn(T *pt, int n)
{
    T t = pt[0];
    for(int i=1;i<n;i++)
    {
        if (t < pt[i])
        {
            t = pt[i];
        }
    }
    return t;
}

template <> char * maxn(char *chs[],int n)
{
    char *p = chs[0];
    int i = 1;
    for(i;i<n;i++)
    {
        cout<<chs[i]<<" "<<strlen(chs[i])<<" "<<strlen(p)<<endl;
        if (strlen(p) < strlen(chs[i]))
        {
            p = chs[i];
        }
    }
    return  p;
}

int main()
{
    int a[] = {1,2,3,9,5,12};
    double b[] = {1.2,2.3,3.4,7.5};
    cout<<maxn(a,6)<<endl;
    cout<<maxn(b,4)<<endl;
    //char *(*chrs) = {"asdf","safa ","sadf"};
    //cout<<maxn(chrs,3)<<endl;
    char *pp[5];
    for (int i = 0;i < 5; i ++)
    {
        pp[i]="asfasf";
    }
    pp[3] = "da sfas asfas";
    cout<<maxn(pp,5)<<endl;
    return 0;
}