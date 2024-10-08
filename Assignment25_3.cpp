/*Write a program which accept string from user and return differnce between frequency
of small chracters and frequency of capital chracters.*/
#include<iostream>
using namespace std;

int Difference(char *str)
{
    int iCapital = 0;
    int iSmall = 0;
    while(*str !='\0')
    {
        if((*str >='A') && (*str <='Z'))
        {
            iCapital++;
        }
        else if((*str >='a') && (*str <='z'))
        {
            iSmall++;
        }
        str++;
    }
    return iCapital - iSmall;
}
int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter the String:";
    cin.getline(Arr,30);

    iRet = Difference(Arr);

    cout<<"The differnce between capital and small:"<<iRet;
    return 0;
}