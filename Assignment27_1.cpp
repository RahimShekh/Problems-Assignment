#include<iostream>
using namespace std;

bool StrChk(char *str,char cNo)
{
    while(*str !='\0')
    {
        if(*str == cNo)
        {
            return true;
        }
        str++;
    }
    return false;
   
}

int main()
{
    char Arr[30];
    char cValue ='\0';
    bool bRet = false;

    cout<<"Enter the String:";
    cin.getline(Arr,30);

    cout<<"Enter the character:";
    cin>>cValue;

    bRet =StrChk(Arr,cValue);

    if(bRet == true)
    {
        cout<<"The chracter is present in string";
    }
    else
    {
        cout<<"The charcter is not present in string";
    }
    return 0;
}