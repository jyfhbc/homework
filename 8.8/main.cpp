#include <iostream>

using namespace std;

int main()
{
    //a
    unsigned int values[5]={2,4,6,8,10};

    //b
    unsigned int *vPtr;

    //c

    for(size_t v=0 ; v<5 ; v++)
        cout<<"values["<<v<<"]="<<values[v]<<endl;


    //d


    *vPtr=values[0];
    vPtr=&values[0];


    //e
    for(size_t v=0 ; v<5 ; v++)
        cout<<"*( vPtr + "<<v<<" )="<<values[v]<<endl;

    //f
    for(size_t v=0 ; v<5 ; v++)
        cout<<"*( values + "<<v<<" )="<<values[v]<<endl;


    //g
    for(size_t v=0 ; v<5 ; v++)
        cout<<vPtr[v]<<endl;

    //h
        cout<<"values[4]="<<values[4]<<endl;

        cout<<"*( values + 4 )="<<values[4]<<endl;

        cout<<"vPer[4]="<<values[4]<<endl;

        cout<<"*( vPtr + 4 )="<<values[4]<<endl;



    return 0;
}
