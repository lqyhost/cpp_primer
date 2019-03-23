#include <iostream>
#include <cstring>

using namespace::std;

int main()
{
    string st[100];
    string ss;
    int i = 0;
    cin>>ss;
    while(ss != "done")
    {
        st[i] = ss;
        cin>>ss;
        i++;
    }
    for (int j=0; j<i; j++)
    {
        cout<<st[j]<<endl;
    }
}