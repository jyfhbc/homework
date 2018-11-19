#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"输入三个非零整数：";
    cin>>a>>b>>c;

    if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        cout<<"可组成直角三角形";

    else
        cout<<"不可组成直角三角形";




    return 0;
}
