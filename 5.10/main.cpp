#include <iostream>

using namespace std;

int nj(int a)
{
    int b=1;


    while(a!=1)
    {
        b=b*a;
        a--;
    }
    return b;
}

int main()
{

    cout<<"n\t"<<"n!"<<endl;

    for(int c=1;c<=5;c++)
    {

        cout<<c<<"\t"<<nj(c)<<endl;
    }

    return 0;
}
