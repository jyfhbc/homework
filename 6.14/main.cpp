#include <iostream>
#include <cmath>
using namespace std;

double roundToInteger(double &number)
{
    double a;
    a=floor(number+0.5);
    return a;
}

double roundToTenths(double &number)
{
    double a;
    a=floor(number*10+0.5)/10;
    return a;
}

double roundToHundredths(double &number)
{
    double a;
    a=floor(number*100+0.5)/100;
    return a;
}

double roundToThousandths(double &number)
{
    double a;
    a=floor(number*1000+0.5)/1000;
    return a;
}
int main()
{
    double a;
    int b=0;
    while(b!=-1)
    {
        cout<<"input -1 or another numbers to end or continue:";
        cin>>b;
        if(b!=-1)
        {
            cout<<"input number:";
            cin>>a;
            cout<<"a:"<<a<<endl
            <<"roundToInteger(a):"<<roundToInteger(a)<<endl
            <<"roundToTenths(a):"<<roundToTenths(a)<<endl
            <<"roundToHundredths(a):"<<roundToHundredths(a)<<endl
            <<"roundToThousandths(a):"<<roundToThousandths(a)<<endl;
        }
    }
    return 0;
}
