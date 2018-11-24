#include <iostream>

using namespace std;

int main()
{
    for(int n=1;n<=10;n++)
    {
    for(int i=1;i<=n;i++)
        cout<<"*";
        cout<<endl;
    }

    cout<<endl;

    for(int n=10;n>0;n--)
    {
    for(int i=1;i<=n;i++)
        cout<<"*";
        cout<<endl;
    }

    cout<<endl;

    int k=0;

    for(int n=10;n>0;n--)
    {

        k++;
        for(int j=0;j<k-1;j++)
        {
            cout<<" ";
        }
        for(int i=1;i<=n;i++)
            cout<<"*";
            cout<<endl;

    }

    cout<<endl;

    k=0;

    for(int n=0;n<10;n++)
    {
        k++;
        for(int j=10;j>k;j--)
            cout<<" ";
        for(int i=0;i<=n;i++)
            cout<<"*";
        cout<<endl;
    }
    return 0;

}
