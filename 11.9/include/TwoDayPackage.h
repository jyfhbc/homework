#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"
#include <iostream>
#include <string>

using namespace std;

class TwoDayPackage : public Package
{
    public:
        TwoDayPackage(string,string,string,string,int,double,double,double);

        void setTwoMoney(double);
        double getTwoMoney();

        void calculateCost();

    private:
        double twomoney;
};

#endif // TWODAYPACKAGE_H
