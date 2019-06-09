#include <iostream>

using namespace::std;

struct chaff
{
    char dross[20];
    int slag;
};


void set_chaff(chaff &chf, const char * ch, int it);
void show_chaff(const chaff &chf);

int main()
{
    int number = 2;
    chaff *chfs = new chaff[number];
    char * ch = "asdfga";
    set_chaff(chfs[0], ch, 4);
    ch = "asdf ga";
    set_chaff(chfs[1], ch, 6);
    for (int i = 0; i< number; i++)
    {
        show_chaff(chfs[i]);
    }
    delete []chfs;
    chaff chfs1[2];
    ch = "iuroe";
    set_chaff(chfs1[0], ch, 14);
    ch = "alrgpy as";
    set_chaff(chfs1[1], ch, 16);
    for (int i = 0; i< number; i++)
    {
        show_chaff(chfs1[i]);
    }
    return 0;
}

void set_chaff(chaff &chf, const char * ch, const int it)
{
    strcpy(chf.dross, ch);
    chf.slag = it;
}

void show_chaff(const chaff &chf)
{
    cout<<"chaff: "<<"(dorss)"<<chf.dross<<"(slag)"<<chf.slag<<endl;
}