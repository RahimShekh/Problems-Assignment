/*Write a program which accept string from user and reverse the string and toggle case.
(implement strcmp())
input: aCBdef
output:FEDbcA
*/
#include<iostream>
using namespace std;

void Strev(char *str)
{
    char *First = str;
    char *End = str;
    char Temp;

    while(*End !='\0')
    {
        End++;
    }
    End--;

    while(First < End)
    {
        Temp = *First;
        *First = *End;
        *End = Temp;

        First++;
        End--;
    }
    First = str;
    while(*First !='\0')
    {
        if((*First >='A') && (*First <'Z'))
        {
            *First = *First + 32;
        }
        else if((*First >='a') && (*First <'z'))
        {
            *First = *First - 32;
        }
        First++;
    }

}
int main()
{
    char Arr[30];

    cout<<"Enter the string:";
    cin.getline(Arr,30);

    Strev(Arr);

    cout<<"The reverse string:"<<Arr;
    return 0;
}