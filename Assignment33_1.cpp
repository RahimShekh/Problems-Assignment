/* Write a recursive program which display below pattern.
output: * * * * * *
*/
#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 0;
    if(i < iNo)
    {
        cout<<"*"<<"\t";
        i++;
        Display(iNo);
    }
}
int main()
{
    int iCnt = 5;

    Display(iCnt);
    return 0;
}