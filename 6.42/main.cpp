#include <iostream>
#include <cmath>

using namespace std;

int distance(double x1,double y1,double x2,double y2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

int main()
{
    int a;
    int b;
    int c;
    int d;

    cout<<"input first point:";
    cin>>a>>b;
    cout<<"input next point:";
    cin>>c>>d;

    cout<<"distance="<<distance(a,b,c,d);
    return 0;
}
