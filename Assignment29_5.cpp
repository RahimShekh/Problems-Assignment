/* Write a program which accept string from user and copy that chracter of that string by
toggling the case.
input: Marvellous Python
output: mARVELLOUS pYTHON
*/
#include<iostream>
using namespace std;

void Strcpy(char *src, char *des)
{
    while(*src !='\0')
    {
        if((*src >='A') && (*src <'Z'))
        {
            *src = *src + 32;
            *des = *src;
        }
        else if((*src >='a') && (*src <'z'))
        {
            *src = *src - 32;
            *des = *src;
        }
        src++;
        des++;
    }
    *des ='\0';
}
int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter the string:";
    cin.getline(Arr,30);

    Strcpy(Arr,Brr);

    cout<<"The updated string:"<<Brr;
}