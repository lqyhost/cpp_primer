#include <iostream>   
#include <string>  
#include <map>  
#include <vector>

using namespace std;  

struct Head
{
    int a;
    string b;
};

int main()  
{  
    map<string,vector<Head>> Map; 
    //map<string,int> Map;  
    cout<<"find: "<<(Map.find("test") == Map.end())<<endl;
    vector<Head> hs;
    Map["test"]=hs;
    //Map["test"] = 11;
    cout<<"find: "<<(Map.find("test") == Map.end())<<endl;
    return 0;
}