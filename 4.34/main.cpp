#include <iostream>

using namespace std;

int main()
{
    double a;
    double n=1;

    cout<<"����Ǹ�������";
    cin>>a;
    while(a!=0)
    {
       n=n*a;
       a=a-1;
    }
    cout<<"n!="<<n<<endl;


    return 0;
}
