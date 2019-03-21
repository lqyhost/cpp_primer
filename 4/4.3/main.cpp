#include <iostream>
#include <cstring>

using namespace::std;

int main()
{
    int len = 30;
    char first_name[len];
    char last_name[len];
    char full_name[len*2];
    cout << "Enter your first name:" ;
    cin.getline(first_name, len);
    cout << "Enter your last name:" ;
    cin.getline(last_name, len);
    strcpy(full_name,first_name);
    strcat(full_name,", ");
    strcat(full_name,last_name);
    cout << "Here's the information in a single string: " << full_name << endl;
    return 0;
}