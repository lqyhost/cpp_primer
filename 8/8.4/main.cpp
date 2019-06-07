#include <iostream>
#include <cstring>

using namespace::std;

struct stringy
{
    char * str;
    int ct;
};

void set(stringy &beany, const char * ch);
void show(const stringy &beany,int tm=1);
void show(char *ch, int tm=1);
//void show(string &st);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set (beany, testing);
    testing[0] = 'D';
    testing[1] = 'u';
    show(beany);
    show(beany,2);
    show(testing);
    show(testing,3);
    show("Done!");
    return 1;
}

void set(stringy &beany, const char * ch)
{
    beany.ct = strlen(ch);
    beany.str = new char[beany.ct+1];
    strcpy(beany.str, ch);
}

void show(const stringy &beany,int tm)
{
    cout<<"show time: "<<tm<<endl;
    for (int i = 0; i < tm; i++)
    {
        cout<<beany.str<<endl;
    }
}

void show(char *ch, int tm)
{
    cout<<"show time: "<<tm<<endl;
    for (int i = 0; i < tm; i++)
    {
        cout<<ch<<endl;
    }
}
/*
void show(string &st)
{
    cout<<st<<endl;
}
*/