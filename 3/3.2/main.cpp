#include <iostream>

using namespace::std;

const int foot2inch = 12;
const double inch2meter = 0.0254;
const double kilogram2pound = 2.2;

int main()
{
    int h_foot = 0;
    int h_inch = 0;
    int w_pound = 0;
    cout << "input your height (foot/int):";
    cin>>h_foot;
    cout << "input your height (inch/int):";
    cin>>h_inch;
    cout << "input your wight (pound/int):";
    cin>>w_pound;
    double h_meter = (h_foot * foot2inch + h_inch)*inch2meter;
    cout<<"you BMI is: "<<w_pound/kilogram2pound/(h_meter*h_meter)<<endl;
}