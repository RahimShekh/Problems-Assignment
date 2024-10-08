#include<iostream>
using namespace std;

void Display(char *str)
{
    while(*str !='\0')
    {
        if((*str >='0') && (*str <'9'))
        {
            cout<<*str;
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
    return 0;
}