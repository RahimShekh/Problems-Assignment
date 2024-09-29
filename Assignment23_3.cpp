/*Accept chracter from user and check whether it is digit or not (0-9).*/

#include<iostream>
using namespace std;

bool Display(char gh)
{
    if((gh >='0') && (gh <='9'))
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