#include <iostream>

using namespace std;

int main()
{
    double a,b,c;

    cout<<"���������ߣ�";
    cin>>a>>b>>c;

    if(a+b>c&&a+c>b&&b+c>a)
        cout<<"���Ա�ʾһ�������ε�������";
    else
        cout<<"������";
    return 0;
}
