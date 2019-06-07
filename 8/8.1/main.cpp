#include <iostream>

using namespace::std;

void str_show(const char *c);
void str_show(const char *c, int t);

int tm = 0;

int main()
{
    char *c = "asf";
    str_show(c);
    str_show(c, 5);
    str_show(c, 5);
    str_show(c, 5);
    return 0;
}

void str_show(const char *c)
{
    cout<<c<<endl;
}

void str_show(const char *c, int t)
{
    cout<<"start"<<endl;
    tm ++;
    if (t != 0)
    {
        for (int i = 0; i < tm; i ++)
        {
            cout<<c<<endl;
        }
    }
    cout<<"end"<<endl;
}