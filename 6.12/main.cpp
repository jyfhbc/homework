#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateCharges(double &t)
    {
        double m;

        if(t<+3)
            m=2;
        else if(t>3)
            m=ceil(t-3)*0.5+2;

        if(m>10)
            m=10;
        cout<<setprecision(2)<<fixed;
        return m;

    }


int main()
{
    double t1=0;
    double t2=0;
    double t3=0;



    cin>>t1>>t2>>t3;




    cout<<"Car\t"<<"Hours\t"<<"Charge\t"<<endl;
    cout<<"1\t"<<t1<<"\t"<<calculateCharges(t1)<<endl;
    cout<<"2\t"<<t2<<"\t"<<calculateCharges(t2)<<endl;
    cout<<"3\t"<<t3<<"\t"<<calculateCharges(t3)<<endl;
    cout<<"TOTAL\t"<<t1+t2+t3<<"\t"<<calculateCharges(t1)+calculateCharges(t2)+calculateCharges(t3);








    return 0;
}
