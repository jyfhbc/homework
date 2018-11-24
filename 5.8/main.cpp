#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=0;
    int c;
    int n;

    cout<<"input a number to confirm size:";

    for(cin>>n;b<n;n--)
    {
        cout<<"input a number:";
        cin>>a;


        if(a>c)
            a=c;
        c=a;
    }
    cout<<"min number="<<c;
    return 0;
}
