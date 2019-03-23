#include <iostream>
#include <array>

using namespace::std;

bool call(char c)
{
    switch (c)
    {
        case 'c': cout<<"A maple is a carnivore"<<endl;return true;
        case 'p': cout<<"A maple is a pianist"<<endl;return true;
        case 't': cout<<"A maple is a tree"<<endl;return true;
        case 'g': cout<<"A maple is a game"<<endl;return true;
        default: cout<<"Please enter c,p,t,g: ";return false;
    }
}

int main()
{
    cout<<"Please enter one of the following choise:\n";
    cout<<"c) carnivore          p) pianist \n c) tree             p) game"<<endl;
    char input;
    cin>>input;
    while(!call(input))
    {
        cin>>input;
    }
}
