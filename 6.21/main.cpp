#include <iostream>

using namespace std;

int iseven(int a)
{
    int b;
    b=a%2;
    if(b==0)
        return true;
    else
        return false;
}

int main()
{
    int a;


    while(a!=-1)
    {
        cout<<"input a number:";
        cin>>a;
        if(a!=-1)
        {
            cout<<iseven(a)<<endl;
        }
    }
    return 0;
}
