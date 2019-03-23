#include <iostream>
#include <string>

using namespace::std;

const int ArSize = 16;

int main()
{
    string month[12] = {"Jan.","Feb.","Mar.","April","May","June","July","Aug.","Sept.","Oct.","Nov.","Dec."};
    int sell_num[12];
    int sum = 0;
    for (int i = 0; i<sizeof(sell_num)/sizeof(sell_num[0]); i++)
    {
        cout<<"Enter the sell number of "<<month[i]<<": ";
        cin>>sell_num[i];
        sum += sell_num[i];
    }
    cout<<"total of sell number of this year is "<<sum<<endl;
    cout<<"avage of sell number is "<<sum/(sizeof(sell_num)/sizeof(sell_num[0]))<<endl;
}