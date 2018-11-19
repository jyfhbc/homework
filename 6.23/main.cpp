#include <iostream>

using namespace std;

void zhengfangxing(int side,char fillCharacter)
{

    int b=0;
    while(b<side)
    {


    for(int a=0;a<side;a++)
    {
        cout<<fillCharacter;

    }

    b++;
cout<<endl;
}
    }

int main()
{
    int side;
    char fillCharacter;

    cin>>side>>fillCharacter;

    zhengfangxing(side,fillCharacter);
    return 0;
}
