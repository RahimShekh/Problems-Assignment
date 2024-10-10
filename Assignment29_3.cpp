/* Write a program which accept string from user and copy that chracter of that string by
converting all small chracters in capital case.
input: Marvellous python 2
output: MARVELLOUS PYTHON 2
*/
#include<iostream>
using namespace std;

void Strcpy(char *src, char *des)
{
    while(*src !='\0')
    {
        if((*src >='a') && (*src <'z'))
        {
            *src = *src - 32;
            *des = *src;
        }
        
        des++;
        src++;
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

    cout<<"The updated string :"<<Brr;
    return 0;
}