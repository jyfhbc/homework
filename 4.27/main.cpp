#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num2=0;
    int num10=0;
    int a=0;
    int k=0;

    cout<<"����������������";
    cin>>num2;

    while(num2!=0)
    {
        a=num2%10;
        num2=num2/10;
        num10=num10+a*pow(2,k);
        k=k+1;
    }
    cout<<"��Ӧ��ʮ��������"<<num10<<endl;

    return 0;
}
