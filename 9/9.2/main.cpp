#include <iostream>
#include "string.h"

const int ArSize = 10;
using namespace::std;

void strcount(const char * str);

void strcount(const string & str);

int main()
{
    string str;
    cout<<"Enter a line:\n";
    getline(cin, str);
    while(cin)
    {
        strcount(str);
        getline(cin, str);
    }
    cout<< "Bye\n";
    return 0;
}

void strcount(const char * str)
{
    using namespace::std;
    static int total = 0;
    int count = 0;
    cout<<"\""<<str<<"\" containns";
    while(*str++)
        count ++;
    total += count;
    cout<< count << "characters\n";
    cout<< total << "characters total\n";
}

void strcount(const string & str)
{
    static int total = 0;
    int count = str.length();
    total += count;
    cout<< count << "characters\n";
    cout<< total << "characters total\n";
}
