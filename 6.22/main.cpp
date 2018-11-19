#include <iostream>

using namespace std;

int zhengfangxing(int side)
{

    int b=0;
    while(b<side)
    {


    for(int a=0;a<side;a++)
    {
        cout<<"*";

    }

    b++;
cout<<endl;
}
    }


int main()
{
    int side;
    cin>>side;

    zhengfangxing(side);
    return 0;
}
