#include "Package.h"
#include <string>
#include <iostream>

using namespace std;

Package::Package(string n,string p,string c,string s,int nu,double k,double m)
{
setName(n);
setPosition(p);
setCity(c);
setState(s);
setNumber(nu);
setKg(k);
setMoney(m);
}

void Package::setName(string n)
{
    name = n;
}

string Package::getName()
{
    return name;
}

void Package::setPosition(string p)
{
    position = p;
}

string Package::getPosition()
{
    return position;
}

void Package::setCity(string c)
{
    city = c;
}

string Package::getCity()
{
    return city;
}

void Package::setState(string s)
{
    state = s;
}

string Package::getState()
{
    return state;
}

void Package::setNumber(int nu)
{
    number = nu;
}

int Package::getNumber()
{
    return number;
}

void Package::setKg(double k)
{
    if(k<0)
    {
        cout<<"please enter the number of kg>=0: ";
        cin>>k;
        kg = k;
    }
        else
            kg = k;
}

double Package::getKg()
{
    return kg;
}

void Package::setMoney(double m)
{
    if(m<0)
    {
        cout<<"please enter the number of money>=0: ";
        cin>>m;
        money = m;
    }
        else
            money = m;
}

double Package::getMoney()
{
    return money;
}

void Package::calculateCost()
{
    double chengji;
    chengji=getMoney()*getKg();
    cout<<"cheng ji= "<<chengji;
}
