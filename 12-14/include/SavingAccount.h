#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H


#include "Account.h"

class SavingsAccount : public Account
{
public:
   SavingsAccount( double, double );

   double calculateInterest();
private:
   double interestRate;
};

#endif // SAVINGACCOUNT_H
