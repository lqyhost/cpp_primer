#include <iostream>
#include "string.h"

using namespace::std;

class BankAccount
{
private:
    string name;
    string account;
    double money;
public:
    BankAccount();
    BankAccount(string name, string account, double money);
    void ShowAccount();
    void Store(double input);
    void Draw(double output);
};