/* Write a program which accept 2 strings from user and concat second string after first
string.
input: rahim
       shekh
output: rahim shekh
*/
#include<iostream>
using namespace std;

void Strcat(char *src, char *des)
{
    while(*src !='\0')
    {
        src++;
    }
    while(*des!='\0')
    {
        *src = *des;
        src++;
        des++;
    }
    *src ='\0';
    
}
int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter the first string:";
    cin.getline(Arr,30);

    cout<<"Enter the second string:";
    cin.getline(Brr,30);

    Strcat(Arr,Brr);

    cout<<"The string concat:"<<Arr;
    return 0;
}