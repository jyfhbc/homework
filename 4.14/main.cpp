#include <iostream>

using namespace std;

int main()
{
    int a=1;//account number
    int b=0;//beginning balance
    int c=0;//total charges
    int d=0;//total credits
    int e=0;//credit limit
    int f=0;//new balance

    while(a>0)
    {
        cout<<"Enter account number (or -1 to quit): ";
        cin>>a;

        if(a>0)
        {
        cout<<"Enter beginning balance: ";
        cin>>b;

        cout<<"Enter total charges: ";
        cin>>c;

        cout<<"Enter total credits: ";
        cin>>d;

        cout<<"Enter credit limit: ";
        cin>>e;

        f=b+c-d;
        if(f>e)
        {
            cout<<"New balance is "<<f<<endl
            <<"Account:      "<<a<<endl
            <<"credit limit: "<<e<<endl
            <<"Balance:      "<<f<<endl
            <<"Credit Limit Exceeded."<<endl;
            cout<<endl;
        }
        else
        {
            cout<<"New balance is "<<f<<endl;
            cout<<endl;
        }
        }

    }
    return 0;
}
