#include <iostream>

using namespace std;

int main()
{
    long value1=200000;
    long value2;

    //a
    long *longPtr;

    //b
    longPtr=&value1;

    //c
    cout<<*longPtr<<endl;

    //d
    value2=*longPtr;

    //e
    cout<<value2<<endl;

    //f
    cout<<value1<<endl;

    //g
    cout<<longPtr;
    return 0;
}
