/*Accept charcter from userif it is capital then display all the chracters from the input
chracters from the input chracters till Z.if the input chracter is small then print all
the chracters in reverse order till a. in other cases return directly.*/
#include<iostream>
using namespace std;

void Display(char ch)
{
    if((ch >='A') && (ch <='Z'))
    {
        while(ch <='Z')
        {
            cout<<ch<<endl;
            ch++;
        }
    }
    else if((ch >='a') && (ch <='z'))
    {
        while(ch >='a')
        {
            cout<<ch<<endl;
            ch--;
        }
    }
}
int main()
{
    char cValue = '\0';

    cout<<"Enter the chracter:";
    cin>>cValue;

    Display(cValue);
    return 0;
}