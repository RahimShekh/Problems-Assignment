#include<iostream>
using namespace std;

void Display(char *str)
{
    while(*str != '\0')
    {
        if((*str >='a') && (*str <'z'))
        {
            *str = *str -32;
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

    cout<<"The updated string is:"<<Arr;
    return 0;
}