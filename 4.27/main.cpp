#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num2=0;
    int num10=0;
    int a=0;
    int k=0;

    cout<<"快点输入二进制数：";
    cin>>num2;

    while(num2!=0)
    {
        a=num2%10;
        num2=num2/10;
        num10=num10+a*pow(2,k);
        k=k+1;
    }
    cout<<"对应的十进制数："<<num10<<endl;

    return 0;
}
