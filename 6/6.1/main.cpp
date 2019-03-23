#include <iostream>
#include <cstring>

using namespace::std;

int main()
{
    char a[100];
    int i = 0;
    char ch;
    cout<<"Entter latter:";
    cin.get(ch);
    while (ch !='@')
    {
        if (isalpha(ch))
        {
            if (islower(ch))
            {
                ch = (char)(ch - 'a' + 'A');
            }
            else
            {
                ch = (char)(ch + 'a' - 'A');
            }
            a[i] = ch;
            i ++;
        }
        cin.get(ch);
    }
    for (int j = i;j>-1;j--)
    {
        cout<<a[j];
    }
    cout<<endl;
}