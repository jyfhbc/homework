#include <iostream>

using namespace std;

int main()
{
    int number;
    int counter=0;
    int largest;
    int slargest;


    cout<<"input a number:";
    cin>>largest;
    cout<<"input next number:";
    cin>>number;

    if (number>largest)
    {
        slargest=largest;
        largest=number;
    }
    else
        slargest=number;

        counter+=2;


    while(counter<10)
    {
        cout<<"input next number:";
        cin>>number;

        if(number>largest)
        {
         slargest=largest;
         largest=number;
        }
        else if(number>slargest)
        slargest=number;

        counter++;




    }



    cout<<largest<<endl<<slargest;
    return 0;
}
