#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double p=0;
    double m=0;
    int n=1;

    while(n<=1000)
    {
        m=2*n-1;
        if(n%2!=0)
           p=p+(4/m);
        if(n%2==0)
            p=p-(4/m);
        cout<<n<<setprecision(10)<<fixed<<"\t"<<p<<endl;
        n++;
    }
    return 0;
}
