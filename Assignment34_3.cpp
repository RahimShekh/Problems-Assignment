/* Write a recursive program which display below pattern.
input: 6

output: A B C D E F
*/
#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;
    static char cValue ='A';

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