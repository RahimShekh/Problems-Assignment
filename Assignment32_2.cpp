/* write a program which accept string from user and print below pattern.

input: P P A
output:P P A
       P P
       P
*/
#include<iostream>
using namespace std;

void Pattern(char *str)
{
    int iCnt = 0;
    int i = 0, j = 0;

    while(str[iCnt] !='\0')
    {
        iCnt++;
    }
    for(i = 0; i < iCnt; i++)
    {
        for(j = 0; j <(iCnt -i); j++)
        {
            cout<<str[j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    char Arr[30];

    cout<<"Enter the string:";
    cin.getline(Arr,30);

    Pattern(Arr);
    return 0;
}