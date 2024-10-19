/* Write a recursive program which display below pattern.
output: a b c d e f
*/
#include<iostream>
using namespace std;

void Display(int iNo)
{
    static char cValue ='a';
    static int i = 1;
    if(i <=iNo)
    {
        cout<<cValue<<"\t";
        cValue++;
        i++;
        Display(iNo);
    }
}
int main()
{
    Display(5);
    return 0;
}