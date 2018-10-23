#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 0;

    while(a>0)
    {
        cout<<"Enter sales in dollars (-1 to end): ";
        cin>>a;
        b=a*0.09+200+1;
        if(b>200)
        cout<<"Salary is: $"<<b<<".00\n"<<endl;
    }





    return 0;
}
