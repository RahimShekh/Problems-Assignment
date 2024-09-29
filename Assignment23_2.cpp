/*Accept chracter from user adn check whether it is capital or not (A-Z)
input: F
output: True
input: d
output: False                                                           */
#include<iostream>
using namespace std;

bool Display(char gh)
{
    if((gh >='A') && (gh <='Z'))
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