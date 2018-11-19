#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;

    cout<<"输入一个五位数：";

    cin>>a;

    b=a/10000;
    c=a/1000%10;
    d=a/10%10;
    e=a%10;

    if(b==e&&c==d)
        cout<<"该数为回文数。";
    else
        cout<<"该数不为回文数。";

    return 0;
}
