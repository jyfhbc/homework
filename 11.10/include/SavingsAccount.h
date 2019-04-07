#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h"
#include <iostream>

using namespace std;

class SavingsAccount : public Account
{
    public:
        SavingsAccount(double,double);

        double calculateInterest();

    private:
        double lirun;
};

#endif // SAVINGSACCOUNT_H
