#include <stdio.h> 
#include <iostream> 

using namespace std; 

int main(int argc, char* argv[]) 

{
    for (int i = 0; i<100; i++)
    {
        cout<<rand()%100/100.0<<endl;
    }
}