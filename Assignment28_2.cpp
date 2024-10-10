/* Write a program which accept string from user and copy the content of that string into
another string.
input: Marvellous Multi os  (copy 10 bytes)
output: Marvellous   in another string
*/
#include<iostream>
using namespace std;

void Strcpy(char *src, char *des, int iNo)
{
    while((*src !='\0') && (iNo != 0))
    {
        *des = *src;
        src++;
        des++;
        iNo--;
    }
    *des ='\0';
}
int main()
{
    char Arr[30];
    char Brr[30];
    int iValue = 0;
    
    cout<<"Enter the string:";
    cin.getline(Arr,30);

    cout<<"Enter the how much bytes u want to copy:";
    cin>>iValue;

    Strcpy(Arr,Brr,iValue);

    cout<<"the copied string is:"<<Brr;

    return 0;
}