#include <iostream>

using namespace::std;

void tr_str(string &str)
{
    int s_size = str.size();
    for (int i = 0;i<s_size; i++)
    {
        if (islower(str[i]))
            str[i] -= 32;
    }
}

int main()
{
    string str="";
    cout<<"Ennter a string (q to quit):";
    getline(cin,str);
    while(!cin.fail() && str != "q")
    {
        tr_str(str);
        cout<<str<<endl;
        cout<<"Ennter a string (q to quit):";
        getline(cin,str);
    }
    cout<<"Bye"<<endl;
}