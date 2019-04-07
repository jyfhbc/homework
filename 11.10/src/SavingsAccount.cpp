#include "SavingsAccount.h"
#include "Account.h"
#include <iostream>

using namespace std;

SavingsAccount::SavingsAccount(double cinmoney,double lr)
:Account(cinmoney)
{
    lirun = lr;
}

double SavingsAccount::calculateInterest()
{
    return getBlance()*lirun/100;
}
