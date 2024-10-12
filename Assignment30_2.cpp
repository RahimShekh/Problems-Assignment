/*Write a program which accept 2 strings from user and check whether contents of two strings 
are equal or not.(implement strcmp())
input: Rahim
       Rahim
output: True 
*/
#include<iostream>
using namespace std;

bool Strcmp(char *src, char *des)
{
    while((*src !='\0') && (*des !='\0'))
    {
        if(*src != *des)
        {
            return false;
            break;
        }
        src++;
        des++;

    }
    return true;
}
int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    cout<<"Enter the 1st String:";
    cin.getline(Arr,30);

    cout<<"Enter the 2nd String:";
    cin.getline(Brr,30);

    bRet = Strcmp(Arr,Brr);

    if(bRet == true)
    {
        cout<<"The String is Equal";
    }
    else
    {
        cout<<"The String is Differnt";
    }
    return 0;
}