#include <iostream>

using namespace::std;

struct domition
{
    string full_name;
    double money;
};

int main()
{
    int num_dom=0;
    cout<<"enter the number of domitions: ";
    cin>>num_dom;
    cin.get();
    domition *doms = new domition[num_dom];
    for (int i = 0; i < num_dom ;i++)
    {
        cout<<"enter the name of domition: ";
        getline(cin,doms[i].full_name);
        cout<<"enter the money of domition: ";
        cin>>doms[i].money;
        cin.get();
    }
    cout<<"this is list or grand patrons:"<<endl;
    for (int i = 0; i < num_dom ;i++)
    {
        if (doms[i].money > 10000)
        {
            cout<<doms[i].full_name<<endl;
        }
    }
    delete []doms;
}

