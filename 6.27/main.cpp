#include <iostream>

using namespace std;

double mins(double a,double b,double c)
{
    double d;
    d=a<b?a:b;
    d=d<c?d:c;
    return d;
}

int main()
{
    double a;
    double b;
    double c;

    cout<<"input a,b,c";
    cin>>a>>b>>c;
    cout<<"min:"<<mins(a,b,c);
    return 0;
}
