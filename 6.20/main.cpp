#include <iostream>

using namespace std;

int multiple(int a,int b)
{
    if(b%a==0)
        return true;
    else
        return false;
}

int main()
{
    cout << multiple(2,4);
    return 0;
}
