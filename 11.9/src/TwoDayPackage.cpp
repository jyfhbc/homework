#include "TwoDayPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include <iostream>
#include <string>

using namespace std;

TwoDayPackage::TwoDayPackage(string n,string p,string c,string s,int nu,double k,double m,double tm)
:Package(n,p,c,s,nu,k,m)
{
    setTwoMoney(tm);
}

void TwoDayPackage::setTwoMoney(double tm)
{
    twomoney = tm;
}

double TwoDayPackage::getTwoMoney()
{
    return twomoney;
}

void TwoDayPackage::calculateCost()
{
    double chengji;
    chengji=getMoney()*getKg()+getTwoMoney();
    cout<<"cheng ji= "<<chengji;
}
