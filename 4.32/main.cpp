#include <iostream>

using namespace std;

int main()
{
    double a,b,c;

    cout<<"输入三条边：";
    cin>>a>>b>>c;

    if(a+b>c&&a+c>b&&b+c>a)
        cout<<"可以表示一个三角形的三条边";
    else
        cout<<"不可以";
    return 0;
}
