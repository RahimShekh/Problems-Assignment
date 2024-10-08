/*Write a program which accept string from user and cheack whether it contains vowels in it
or not.*/
#include<iostream>
using namespace std;

bool Vowels(char *str)
{
    while(*str !='\0')
    {
        if((*str =='a')||(*str =='e')||(*str =='i')||(*str =='o')||(*str =='u')||(*str =='A')||(*str =='E')||(*str =='I')||(*str =='O')||(*str =='U'))
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
    bool bRet = false;

    cout<<"Enter the string:";
    cin.getline(Arr,30);

    bRet = Vowels(Arr);

    if(bRet == true)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }
    return 0;
}