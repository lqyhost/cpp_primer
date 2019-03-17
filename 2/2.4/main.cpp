#include <iostream>

using namespace::std;

int main()
{
    int age_year = 0;
    int age_month = 0;
    cout << "input your age year(int):";
    cin >> age_year;
    cout << "input you age month(int):";
    cin >> age_month;
    cout << "tot mounth of your age is:"<< 12 * age_year + age_month <<endl;
}