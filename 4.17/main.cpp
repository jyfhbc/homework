#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    int number=0;
    int largest=0;
    int a=0;

    while(counter<10)
    {
        a=number;
        cout<<"��������";
        cin>>number;

        largest=number>a?number:a;
        counter+=1;

    }
    cout<<"���ֵ��"<<largest;
    return 0;
}
