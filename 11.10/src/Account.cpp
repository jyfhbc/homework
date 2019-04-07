#include "Account.h"
#include <iostream>

using namespace std;

Account::Account(double cinmoney)
{
    if(cinmoney < 0)
    {
        cout<<"Enter error.";
        money = 0;
    }
    else
        money = cinmoney;
}

void Account::credit(double addmoney)
{
    money = money + addmoney;
}

bool Account::debit(double cutmoney)
{
    if(cutmoney < money)
    {
        money = money - cutmoney;
        return true;
    }
    else
    {
        cout<<"Debit amount exceeded account balance.";
        return false;
    }
}

void Account::setBlance(double nowmoney)
{
    money = nowmoney;
}
double Account::getBlance()
{
    return money;
}
