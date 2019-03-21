#include <iostream>
#include <array>

using namespace::std;

int main()
{
    array<double,3> run_records;
    double tot = 0;
    for (int i = 0; i<run_records.size(); i++)
    {
        cout<<"Enter time record of "<<i+1<<" time: ";
        cin>>run_records[i];
        tot += run_records[i];
    }
    cout<<"Average record time :"<<tot/run_records.size()<<endl;

}