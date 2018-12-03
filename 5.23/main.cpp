#include <iostream>

using namespace std;

int main()
{

    for(int n=0;n<5;n++)
    {
        for(int j=4;j>n;j--)
        {
            cout<<" ";
        }
        for(int i=0;i<2*n+1;i++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int n=1;n<5;n++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" ";
        }
        for(int i=10;i>2*n+1;i--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
