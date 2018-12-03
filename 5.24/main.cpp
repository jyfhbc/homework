#include <iostream>

using namespace std;

int main()
{
    int m;
    cout<<"input a number to show hangshu:";
    cin>>m;

    for(int n=0;n<m/2+1;n++)
    {
        for(int j=m/2;j>n;j--)
        {
            cout<<" ";
        }
        for(int i=0;i<2*n+1;i++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int n=1;n<m/2+1;n++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" ";
        }
        for(int i=m+1;i>2*n+1;i--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
