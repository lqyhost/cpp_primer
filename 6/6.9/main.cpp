#include <iostream>
#include <fstream>
#include <string>

using namespace::std;

struct Edt
{
    string name;
    double money;
};


int main()
{
    int edt_num = 0;

    string inputs;
    string input;
    ifstream inFile;
    inFile.open("test.txt");
    if(inFile)
    {
        inFile>>edt_num;
        Edt* edts= new Edt[edt_num];
        getline(inFile,input);
        for(int i= 0; i<edt_num; i++)
        {
            getline(inFile,input);
            edts[i].name = input;
            getline(inFile,input);
            edts[i].money = atof(input.c_str());
        }
        for(int i= 0; i<edt_num; i++)
        {
            cout<<edts[i].name<<" edtor "<<edts[i].money<<" dollar"<<endl;
        }
    }
}

