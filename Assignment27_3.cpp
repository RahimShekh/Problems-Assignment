//Write a program which accept string from user and accept one character return index of first
//occurence of that character.
#include<iostream>
using namespace std;

int First(char *str, char cNo)
{
    int iCount = 0,iCnt = 0;
    while(*str !='\0')
    {
        iCount++;
        if(*str == cNo)
        {
            return iCount;
        }
        str++;
    }
}
int main()
{
    char Arr[30];
    char cValue = '\0';
    int iRet = 0;

    cout<<"Enter the string:";
    cin.getline(Arr,30);

    cout<<"Enter the character:";
    cin >>cValue;

    iRet = First(Arr,cValue);

    cout<<"The index of that chracter :"<<iRet;

    return 0;
}