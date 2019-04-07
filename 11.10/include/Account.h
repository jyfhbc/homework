#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

using namespace std;

class Account
{
    public:
        Account(double);

        void credit(double);

        bool debit(double);

        void setBlance(double);
        double getBlance();

    private:
        double money;
};

#endif // ACCOUNT_H
