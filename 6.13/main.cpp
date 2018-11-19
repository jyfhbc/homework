#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x=0;
    double y;

    while(x!=-1)
    {
        cout<<"input a number(-1 to end)";
        cin>>x;
        if(x!=-1)
        {
            y=floor(x+0.5);
            cout<<"Ô­Ê¼Öµ£º"<<x<<endl<<"y="<<y<<endl;
        }
    }


    return 0;
}
