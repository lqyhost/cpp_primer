#include <iostream>
#include <string>

using namespace::std;

const int ArSize = 16;

int main()
{
    string month[12] = {"Jan.","Feb.","Mar.","April","May","June","July","Aug.","Sept.","Oct.","Nov.","Dec."};
    int sell_num[3][12]={0};
    int sum[3] = {0, 0, 0};
    for (int i = 0; i<sizeof(sell_num)/sizeof(sell_num[0]); i++)
    {
        cout<<"Enter the sell number of "<<i<<" Year."<<endl;
        for (int j = 0; j<sizeof(sell_num[0])/sizeof(sell_num[0][0]); j++)
        {
            cout<<"Enter the sell number of "<<month[j]<<": ";
            cin>>sell_num[i][j];
            sum[i] += sell_num[i][j];
        }
    }
    cout<<"****************Report Start******************";
    for (int i = 0; i<sizeof(sell_num)/sizeof(sell_num[0]); i++)
    {
        cout<<"total of sell number of "<<i<<" year is "<<sum[i]<<endl;
        cout<<"avage of sell number is "<<sum[i]/(sizeof(sell_num[0])/sizeof(sell_num[0][1]))<<endl;
    }
    cout<<"*****************Report End*******************";
}