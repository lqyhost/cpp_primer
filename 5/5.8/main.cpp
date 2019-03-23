#include <iostream>
#include <cstring>

using namespace::std;

int main()
{
    char st[100][30];
    char ss[30];
    int i = 0;
    cout<<"Enter words (to stop, type the word done):"<<endl;
    cin>>ss;
    while(strcmp(ss,"done"))
    {
        strcpy(st[i],ss);
        cin>>ss;
        i++;
    }
    for (int j=0; j<i; j++)
    {
        cout<<st[j]<<endl;
    }
}