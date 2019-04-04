#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include <string>
#include "Package.h"

using namespace std;


class OvernightPackage : public Package
{
    public:
        OvernightPackage(string,string,string,string,int,double,double,double);

        void setOvernightMoney(double);
        double getOvernightMoney();

        void calculateCost();

    private:
        double overnightmoney;
};

#endif // OVERNIGHTPACKAGE_H
