#include <iostream>
using namespace std;

int main()
{
    int a=1;
    cout<<"N\t"<<"10*N\t"<<"100*N\t"<<"1000*N\t"<<endl<<endl;
    while(a<6)
    {
        cout<<a<<"\t"<<10*a<<"\t"<<100*a<<"\t"<<1000*a<<endl;
        a+=1;
    }

    return 0;
}
