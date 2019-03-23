#include <iostream>
#include <array>

using namespace::std;

const int strsize = 30;

struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main()
{
    bop bp = {"yujie","master","my lover",2};
    cout<<"Please enter type you want to display:\n";
    cout<<"a) by name          b) by title \nc) by bopname        d) by preference\nq) quit"<<endl;
    char input;
    cin>>input;
    while(input != 'q')
    {
        switch (input)
        {
            case 'a': cout<<"member you chose is :"<<bp.fullname<<endl;break;
            case 'b': cout<<"member you chose is :"<<bp.title<<endl;break;
            case 'c': cout<<"member you chose is :"<<bp.bopname<<endl;break;
            case 'd': 
            {
                switch (bp.preference)
                {
                    case 0: cout<<"member you chose is :"<<bp.fullname<<endl;
                    case 1: cout<<"member you chose is :"<<bp.title<<endl;
                    case 2: cout<<"member you chose is :"<<bp.bopname<<endl;
                }
                break;
            }
            default: cout<<"Please enter a,b,c,d,q: ";
        }
        cin>>input;
    }


}