#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double whours=0;
    double MPG=0;

    while(whours!=-1)
    {
        cout<<"Enter hours worked (-1 to end): ";
        cin>>whours;

        if(whours!=-1)
        {
            cout<<setprecision(2)<<fixed;
            cout<<"Enter hourly rate of the employee ($00.00): ";
            cin>>MPG;
            if(whours<=40)
                cout<<"Salary is $"<<whours*MPG<<endl<<endl;
                else
                    cout<<"Salary is $"<<40*MPG+((whours-40)*1.5*MPG)<<endl<<endl;



        }
    }
    return 0;
}
