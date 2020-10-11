#include <iostream>
#include "account.h"

BankAccount::BankAccount(){};
BankAccount::BankAccount(string name, string account, double money)
{
    this->name = name;
    this->account = account;
    this->money = money;
}
void BankAccount::ShowAccount()
{
    cout<<name<<"\' account is: "<<account<<", has money: "<<money<<endl;
}
void BankAccount::Store(double in)
{
    money += in;
    cout<<name<<"\' account : "<<account<<", store money: "<<in<<" now this account have:"<<money<<endl;
}
void BankAccount::Draw(double out)
{
    money -= out;
    cout<<name<<"\' account : "<<account<<", draw money: "<<out<<" now this account have:"<<money<<endl;
}