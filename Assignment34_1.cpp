/* Write a program which display below pattern
input: 5
output: * * * * *
*/
#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        cout<<"*"<<"\t";
        i++;
        Display(iNo);
    }
}
int main()
{
    int iValue = 0;

    cin>>iValue;

    Display(iValue);
    return 0;
}