#include <iostream>

using namespace std;

int main()
{
    double r=0;
    double d,c,s;

    cout<<"输入半径：";
    cin>>r;

    d=2*r;
    c=2*3.14159*r;
    s=3.14159*r*r;

    cout<<"直径："<<d<<endl
    <<"周长："<<c<<endl
    <<"面积："<<s;
    return 0;
}
