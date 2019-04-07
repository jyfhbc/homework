#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main()
{
    Account s1(2000.00);
    s1.credit(20.00);
    s1.debit(2000.00);
    cout<<s1.getBlance()<<endl;

    SavingsAccount s2(2000.00,10);
    s2.credit(20.00);
    s2.debit(2000.00);
    cout<<s2.calculateInterest()<<endl;
    s2.credit(s2.calculateInterest());
    cout<<s2.calculateInterest()<<endl;

    CheckingAccount s3(2000.00,2);
    s3.credit(20.00);
    s3.debit(2000.00);
    cout<<s3.getBlance();

    return 0;
}
