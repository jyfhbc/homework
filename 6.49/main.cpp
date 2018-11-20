#include <iostream>

using namespace std;

double circleArea(double r)
{
    return 3.14*r*r;
}

int main()
{
    int r;
    cout << "please input a r:";
    cin>>r;

    cout<<"S="<<circleArea(r);
    return 0;
}
