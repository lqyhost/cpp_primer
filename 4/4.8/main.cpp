#include <iostream>
#include <string>

using namespace::std;

struct Pizza
{
    string band;
    double diameter;
    double wight;
};


int main()
{
    int n;
    cout<<"Enter the number of Pizza you want to Analysis:";
    cin>>n;
    cin.get();
    Pizza *pz = new Pizza [n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the producter of pizza: ";
        getline(cin,pz[i].band);
        cout<<"Enter the diameter of pizza: ";
        cin>>pz[i].diameter;
        cout<<"Enter the wight of pizza: ";
        cin>>pz[i].wight;
        cin.get();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<pz[i].band<<endl<<pz[i].diameter<<endl<<pz[i].wight<<endl;
    }
    return 0;
}