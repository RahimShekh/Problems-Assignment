/* Accept character from user and check whether it is alphabet or not (A-Z a-z)
input: F
output: True
input:   $
output:  false                                                            */
#include<iostream>
using namespace std;

bool Display(char gh)
{
    if((gh >='A') && (gh <='Z') || (gh >= 'a') && (gh <= 'z'))
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