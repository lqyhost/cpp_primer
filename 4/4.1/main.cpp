#include <iostream>
#include <string.h>

using namespace::std;

int main()
{
    int a_size = 30;
    char first_name[a_size],last_name[a_size];
    char deserve_letter;
    int age;
    cout<<"What is your first name? ";
    cin.getline(first_name,a_size);
    cout<<"What is your last name? ";
    cin.getline(last_name,a_size);
    cout<<"What letter grade do you deserve?";
    cin>>deserve_letter;
    cout<<"What is your age? ";
    cin>>age;
    cout<<"Name: "<<last_name<<", "<<first_name<<endl;
    cout<<"Grade: "<<char(deserve_letter+1)<<endl;
    cout<<"Age: "<<age<<endl;
}