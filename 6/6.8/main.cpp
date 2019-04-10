#include <iostream>
#include <fstream>
#include <string>

using namespace::std;

int main()
{
    string inputs;
    string input;
    ifstream inFile;
    inFile.open("test.txt");
    inFile>>input;
    inputs += input;
    while(inFile.good())
    {
        inFile>>input;
        inputs += input;
    }
    inFile.close();
    cout<<inputs<<endl;
    cout<<inputs.length()<<endl;

}

