/*Accept chracter from user and check whether it is special symbol or not(!,@,#,$,%,^,&,*)*/

#include<iostream>
using namespace std;

bool Display(char ch)
{
    if((ch >= '!') && (ch <= '*'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool cRet ='\0';

    cout<<"Enter the character:";
    cin>>cValue;

    cRet = Display(cValue);

    if(cRet == true)
    {
        cout<<"it is a special character";
    }
    else
    {
        cout<<"It is not a special character";
    }
    return 0;
}