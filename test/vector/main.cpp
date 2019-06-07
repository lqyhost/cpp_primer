#include <iostream>   
#include <string>  
#include <vector>

using namespace std;  

struct Head
{
    int a;
    //string b;
};

int main()  
{
    Head h = {10};
    vector<Head> hds(10,h);
    hds[0].a=99;
    cout<< hds[0].a<<endl;
    auto& hd =hds[0];
    hd.a =100;
    //hd.b="good" ;
    //cout<< hd.a;
    cout<< hds[0].a<<endl;
    return 0;
}