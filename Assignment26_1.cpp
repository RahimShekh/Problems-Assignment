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
        str++;
    }
}
int main()
{
    char Arr[30];

    cout<<"Enter the String:";
    cin>>Arr;

    Display(Arr);

    cout<<"The updated String:"<<Arr;
    return 0;
}