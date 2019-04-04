#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(string n,string p,string c,string s,int nu,double kg,double m,double om)
:Package(n,p,c,s,nu,kg,m)
{
    setOvernightMoney(om);
}

void OvernightPackage::setOvernightMoney(double om)
{
    overnightmoney = om;
}

double OvernightPackage::getOvernightMoney()
{
    return overnightmoney;
}

void OvernightPackage::calculateCost()
{
    double chengji;
    chengji=(getOvernightMoney()+getMoney())*getKg();
    cout<<"cheng ji= "<<chengji;
}
