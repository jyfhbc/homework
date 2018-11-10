#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a=1;
    cout<<"N\t"<<setw(10)<<"10*N\t"<<setw(10)<<"100*N\t"<<setw(10)<<"1000*N\t"<<endl;
    while(a<6)
    {
        cout<<endl;
        cout<<a<<"\t"<<10*a<<"\t"<<100*a<<"\t"<<1000*a<<endl;
        a+=1;
    }

    return 0;
}
