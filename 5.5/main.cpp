#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c=0;

    cout<<"input a number of >=0 :"<<endl;




    for(cin>>a;a>0;a--)
    {

        cout<<"input number of need to sum;";
        cin>>b;
        c=c+b;
    }

    cout<<"Sum="<<c;
    return 0;
}
