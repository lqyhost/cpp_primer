#include <iostream>
#include <fstream>
#include <string>

using namespace::std;

int input(double *scores)
{
    cout<<"Enter score of golf (enter 0 to finish input)";
    int i = 0;
    double input = 0;
    for (i;i<10;i++)
    {
        cin>>input;
        if (input != 0)
        {
            scores[i] = input;
        }
        else
        {
            break;
        }
    }
    return i;
}

void show(double *scores, int l)
{
    for (int i = 0; i < l; i ++)
    {
        cout<<scores[i]<<endl;
    }
}

double count(double *scores, int l)
{
    double sum = 0;
    for (int i = 0; i < l; i ++)
    {
        sum += scores[i];
    }
    return sum/l;
}

int main()
{
    double scores[10];
    int l = input(scores);
    show(scores, l);
    cout<<count(scores, l);
}