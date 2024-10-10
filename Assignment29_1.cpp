/*Write a program which accept string from user and copy that chracter of that string into
another string in reverse order.
input: rahim
output:mihar
*/
#include<iostream>
using namespace std;

void Strcpy(char *src, char *des)
{
    char *start = src;
    char *End = src;
    while(*End !='\0')
    {
        End++;
    }
    End--;

    while(start <= End)
    {
        *des = *End;
        des++;
        End--;
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

    cout<<"The Reverse string:"<<Brr;
    return 0;
}