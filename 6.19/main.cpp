#include <iostream>
#include <cmath>

using namespace std;

double hypotenuse(double a,double b)
{
    return sqrt(a*a+b*b);
}

int main()
{
    cout<<hypotenuse(3.0,4.0)<<endl<<hypotenuse(5.0,12.0)<<endl<<hypotenuse(8.0,15.0);
    return 0;
}
