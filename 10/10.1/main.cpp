#include <iostream>
#include "account.h"

int main()
{
    string name = "hu";
    string account = "001";
    BankAccount b = BankAccount(name, account, 1500);
    b.ShowAccount();
    b.Store(2000);
    b.ShowAccount();
    b.Draw(100);
    b.ShowAccount();
}