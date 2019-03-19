#include <iostream>

using namespace::std;

int main()
{
    const int foot2inch = 12;
    int h_inch = 0;
    cout << "input your height (inch/int):";
    cin >> h_inch;
    cout << "your height is " << h_inch/foot2inch << " foot and " << h_inch%foot2inch << " inch"<<endl;
    return 1;
}