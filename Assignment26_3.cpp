//Write a program which accept string from user and toggle the case.
#include<iostream>
using namespace std;

void Display(char *str)
{
    while(*str !='\0')
    {
        if((*str >='A') && (*str <'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >='a') && (*str <'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char Arr[30];

    cout<<"Enter the String:";
    cin>>Arr;

    Display(Arr);

    cout<<"The update String :"<<Arr;
    return 0;
}