#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        cout<<i<<"\t"<<"*\t";
        i++;
        Display(iNo);
    } 
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number :"<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}