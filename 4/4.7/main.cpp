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
    Pizza snack;
    cout<<"Enter the producter of pizza: ";
    getline(cin,snack.band);
    cout<<"Enter the diameter of pizza: ";
    cin>>snack.diameter;
    cout<<"Enter the wight of pizza: ";
    cin>>snack.wight;
    cout<<snack.band<<endl<<snack.diameter<<endl<<snack.wight<<endl;
    return 0;
}