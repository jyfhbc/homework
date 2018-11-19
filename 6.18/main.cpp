#include <iostream>

using namespace std;

int integerPower(int &a,int &b)
{
    int d=1;
    while(b<1)
    {
        d=d*a;
        b=b-1;

    }
    return d;

}
int main()
{
    cout<<integerPower(2,3);
    return 0;
}
