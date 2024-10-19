/* Write a recursive program which display below pattern.
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
        i++;
        cValue++;
        Display(iNo);
    }
}
int main()
{
    Display(5);
    return 0;
}