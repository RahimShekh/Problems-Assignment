/*Write a program which accept 2 strings from user and check whether first N contents of 2
strings are equal or not.(implement strcmp())
input: Rahimshekh              
       Rahimshpy
       5                            8
output:True                        false
*/
#include<iostream>
using namespace std;

bool Strcmp(char *src,char *des,int iNo)
{
    while((*src !='\0') && (*des !='\0') && (iNo > 0))
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
    int iValue = 0;
    bool bRet = false;


    cout<<"Enter the First String:";
    cin.getline(Arr,30);

    cout<<"Enter the second string:";
    cin.getline(Brr,30);

    cout<<"Enter the number to compare:";
    cin>>iValue;

    bRet = Strcmp(Arr,Brr,iValue);

    if(bRet == true)
    {
        cout<<"the string is same";
    }
    else
    {
        cout<<"The string is different";
    }
    return 0;
}