#include <iostream>

using namespace std;

int main()
{
    int b=1;
    for(int i=1;i<=15;i++)
    {

        if(i%2!=0)
            b=b*i;

    }
    cout<<b;
    return 0;
}
