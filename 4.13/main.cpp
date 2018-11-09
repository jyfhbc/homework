#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double m=0;
    double g=0;
    double MPG=0;
    double tMPG=0;

    while(m!=-1)
    {
            cout<<"Enter miles driven (-1 to quit): ";
            cin >>m;
            if(m!=-1)
            {
                cout<<"Enter gallons used: ";
                cin>>g;
                cout<<setprecision(6)<<fixed;
                MPG=m/g;
                cout<<"MPG this trip: "<<MPG<<endl;
                tMPG=tMPG+MPG;
                cout<<"Total MPG: "<<tMPG<<endl<<endl;
            }



    }
    return 0;
}
