#include <iostream>
#include <string>

using namespace::std;

int main()
{
    string name;
    string dessert;
    cout << "Enter your name:" << endl;
    getline(cin, name);
    cout << "Enter your favorite dessert:" << endl;
    getline(cin,dessert);
    cout << "I have some delicious " << dessert << " for your " << name << endl;
    return 0;
}