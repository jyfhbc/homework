#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;

    cout<<"����һ����λ����";

    cin>>a;

    b=a/10000;
    c=a/1000%10;
    d=a/10%10;
    e=a%10;

    if(b==e&&c==d)
        cout<<"����Ϊ��������";
    else
        cout<<"������Ϊ��������";

    return 0;
}
