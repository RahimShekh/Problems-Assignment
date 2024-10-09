#include<iostream>
using namespace std;

int frequency(char *str,char cNo)
{
    int iCount = 0;
    while(*str !='\0')
    {
        if(*str == cNo)
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
    char cValue ='\0';
    int iRet = 0;

    cout<<"Enter the String:";
    cin.getline(Arr,30);

    cout<<"Enter the chracter:";
    cin>>cValue;

    iRet = frequency(Arr,cValue);

    cout<<"The frequency of charcter:"<<iRet;
    return 0;
}