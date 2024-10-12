/* Write a program which accept 2 strings from user and concat N chracters of second string
after first string.Value of N should be accepted from user.
input: Marvellous infosystem
       Logic building
       5
output: Marvellous infosystem Logic
*/
#include<iostream>
using namespace std;

void Strcat(char *src,char *des, int iNo)
{
    while(*src !='\0')
    {
        src++;
    }
    while((*des !='\0') && (iNo > 0))
    {
        *src = *des;
        src++;
        des++;
        iNo--;
    }
    *src ='\0';
}
int main()
{
    char Arr[30];
    char Brr[30];
    int iValue = 0;

    cout<<"Enter the 1st String:";
    cin.getline(Arr,30);

    cout<<"Enter the 2nd String:";
    cin.getline(Brr,30);

    cout<<"Enter the concat number:";
    cin>>iValue;

    Strcat(Arr,Brr,iValue);

    cout<<"The updated string :"<<Arr;
    return 0;
}