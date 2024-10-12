/*
    Write a program which accept string from user and check whether the string is pallindrome or not without considering its case.

    Input : "1abccBA1"

    Output : TRUE    

*/

#include<iostream>
using namespace std;

bool StrPallindrome(char * str)
{
    char * start = str;
    char * end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start <= end)
    {
        if(tolower(*start) != tolower(*end))
        {
            return false;
        }

        start++;
        end--;
    }

    return true;

}

int main()
{
    char Arr[50];
    bool bRet = false;

    cout<<"Please Enter String : "<<endl;
    cin.getline(Arr,50);

    bRet = StrPallindrome(Arr);

    if(bRet == true)
    {
        cout<<"String is Pallindrome "<<endl;
    }
    else
    {
        cout<<"String is not Pallindrome "<<endl;
    }
    
    return 0;
}