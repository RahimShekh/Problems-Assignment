/*

    Write a program which accept string from user and count number of words from string.

    Input : "Marvellous Multi OS"

    Output :  3   

    Input : "    Marvellous Multi    OS   Pune"

    Output :  4

*/
#include<iostream>
using namespace std;

int Count(char *str)
{
    int iCount = 0;
    while(*str !='\0')
    {
        if(*str ==' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter the string:";
    cin.getline(Arr,30);

    iRet = Count(Arr);

    cout<<"the count of string is:"<<iRet;
    return 0;
}