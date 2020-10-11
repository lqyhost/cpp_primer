#include <iostream>   
#include <string>  
#include <map>  
#include <vector>
#include <time.h>
#include <math.h>

using namespace std;  

int main()
{
    time_t timep;
    time(&timep);
    cout<<timep<<endl;
    int start = timep;
    bool out = false;
    while (timep-start < 100)
    {
        time(&timep);
        if (((timep-start)%3 == 0) && !out)
        {
            cout<<sin((timep-start)/60.0)<<endl;
            cout<<timep<<endl;
            out = true;
        }
        if (out && ((timep-start)%3 > 0))
        {
            out = false;
        }
    }
}