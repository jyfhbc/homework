#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
#include <iostream>

using namespace std;

class Package
{
    public:
         Package(string,string,string,string,int,double,double);

        void setName(string);
        string getName();

        void setPosition(string);
        string getPosition();

        void setCity(string);
        string getCity();

        void setState(string);
        string getState();

        void setNumber(int);
        int getNumber();

        void setKg(double);
        double getKg();

        void setMoney(double);
        double getMoney();

        void calculateCost();


    private:
        string name;
        string position;
        string city;
        string state;
        int number;
        double kg;
        double money;
};

#endif // PACKAGE_H
