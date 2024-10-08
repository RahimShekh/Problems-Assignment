/*Write a program which accept string from user and count number of capital chracters*/

#include<iostream>
using namespace std;

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str !='\0')
    {
        if((*str >='A') && (*str <= 'Z'))
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

    cout<<"Enter the String:";
    cin.getline(Arr,30);

    iRet = CountCapital(Arr);

    cout<<"The count of capital letter:"<<iRet;
    return 0;
}