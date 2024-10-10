#include<iostream>
using namespace std;

void Strcpy(char *src, char *des)
{
    while(*src !='\0')
    {
        if((*src >='a') && (*src <'z'))
        {
            *des = *src;
            des++;
        }
        src++;
        *des ='\0';
    }
}
int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter the string:";
    cin.getline(Arr,30);

    Strcpy(Arr,Brr);

    cout<<"The capital copied string:"<<Brr;
    return 0;
}