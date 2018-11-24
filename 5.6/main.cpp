#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int c=0;



    for(int b=0;b!=9999;a=a+b)
    {
        cout<<"input a number(9999 to end)";
        cin>>b;
        c++;

    }
    cout<<"average="<<(a-9999)/(c-1);


    return 0;
}
