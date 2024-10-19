/* Write a recursive program which display below pattern.
input: 6

output: a b c d e f
*/
#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;
    static char cValue ='a';

    if(i <= iNo)
    {
        cout<<cValue<<"\t";
        cValue++;
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