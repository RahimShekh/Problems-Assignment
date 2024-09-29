/* Accept chracter from user to check whether it is small case or not(a-z)*/
#include<iostream>
using namespace std;

bool Display(char gh)
{
    if((gh >= 'a') && (gh <= 'z'))
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
    char ch ='\0';
    bool bRet = false;

    cout<<"Enter the charcter:";
    cin>>ch;

    bRet = Display(ch);

    if(bRet == true)
    {
        cout<<"TRUE"<<endl;
    }
    else
    {
        cout<<"FALSE"<<endl;
    }
    return 0;
}